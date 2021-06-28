#include <stdio.h>
//i linha, j coluna

void result(int v[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    printf("Princesa %d: %d voto(s)\n", i+1, v[i]);
    result(v, i+1, tam);
}

void votacao(int l, int c, int e[][c], int v[], int i, int j, int soma)
{
    if (i == l)
    {
        v[j] = soma;
        j = j + 1;
        i = 0;
        soma = 0;
    }
    if (j == c)
    {
        return;
    }
    votacao(l, c, e, v, i+1, j, soma+e[i][j]);
} 

void ler(int l, int c, int e[][c], int i, int j)
{
    if (j == c)
    {
        j = 0;
        i += 1;
    }

    if (i == l)
    {
        return;
    }
    scanf("%d", &e[i][j]);
    ler(l, c, e, i, j+1);

}

int main()
{
    int princesas, eleitores;
    scanf("%d%d", &princesas, &eleitores);
    
    int m[eleitores][princesas], votos[princesas];

    ler(eleitores, princesas, m, 0, 0);
    
    votacao(eleitores, princesas, m, votos, 0, 0, 0);

    result(votos, 0, princesas);
    return 0;
}
