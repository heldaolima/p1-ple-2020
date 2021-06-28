#include <stdio.h>
#include <string.h>

double media(double a[], int i, int tam, double tot)
{
    if (i == tam)
    {
        return tot/tam;
    }

    return media(a, i+1, tam, tot+a[i]);

}

void kgs(double a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    printf("dia %d: %.0lf kg\n", i+1, a[i]);
    kgs(a, i+1, tam);
}

double cont(char p[], int i, int tam)
{
    if (i == tam)
    {
        return 1;
    }
    
    if (p[i] == ' ')
    {
        return 1 + cont(p, i+1, tam);
    }
    return cont(p, i+1, tam);
}

void ler(int n, int i, double qtd[], double money[])
{
    if (i == n)
    {
        return;
    }
    
    double gasto, quant;
    scanf("%lf", &gasto);
    money[i] = gasto;
    
    char frutas[100];
    getchar();
    fgets(frutas, 100, stdin);
    
    int tam;
    tam = strlen(frutas);
    quant = cont(frutas, 0, tam);
    
    qtd[i] = quant;

    ler(n, i+1, qtd, money);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    double qtd[n], money[n];
    
    ler(n, 0, qtd, money);

    kgs(qtd, 0, n);

    printf("%.2lfkg por dia\n", media(qtd, 0, n, 0));
    printf("%.2lfR$ por dia\n", media(money, 0, n, 0));
    
    return 0;
}