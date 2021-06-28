#include <stdio.h>


int maiorq(int valor, int objetivo)
{
    if (valor < objetivo)
    {
        return valor;
    }
    return maiorq(valor-objetivo, objetivo);
}

int menorq(int valor, int objetivo)
{
    if (valor >= 0)
    {
        return valor;
    }
    return menorq(valor+objetivo, objetivo);
}

void jogos(int tab[], int njogs, int nrods, int ntab, int jogs[], int i, int j)
{
    //i para jogadores, j para rodadas
    if (i == njogs)
    {
        i = 0;
        j = j + 1;
    }

    if (j == nrods)
    {
        return;
    }
    int n;
    scanf("%d", &n);
    
    int res = jogs[i] + n;
    if (res > ntab-1)
    {
        res = maiorq(res, ntab);
    }
    else if (res < 0)
    {
        res = menorq(res, ntab);
    }
    res = res + tab[res];

    if (res > ntab-1)
    {
        res = maiorq(res, ntab);
    }
    else if (res < 0)
    {
        res = menorq(res, ntab);
    }
    jogs[i] = res;

    jogos(tab, njogs, nrods, ntab, jogs, i+1, j);
    
}

void init(int jogs[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    jogs[i] = 0;
    init(jogs, i+1, tam);
}

void imprimir(int a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    printf("%d\n", a[i]);
    imprimir(a, i+1, tam);
}

void ler(int a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    scanf("%d", &a[i]);
    ler(a, i+1, tam);
}

int main()
{
    int ncasas, njogs, nrods;
    scanf("%d%d%d", &ncasas, &njogs, &nrods);
    int tab[ncasas], jogs[njogs];
    ler(tab, 0, ncasas);
    

    init(jogs, 0, njogs);
    
    jogos(tab, njogs, nrods, ncasas, jogs, 0, 0);
    
    imprimir(jogs, 0, njogs);

    return 0;
}