#include <stdio.h>

void inverso(int a[], int qtd)
{
    if (qtd == 0)
    {
        return;
    }
    printf("%d ", a[qtd-1]);
    inverso(a, qtd-1);
}

void ler(int a[], int i, int qtd)
{
    if (i == qtd)
    {
        return;
    }
    scanf("%d", &a[i]);
    ler(a, i+1, qtd);
}

int main()
{
    int qtd;
    scanf("%d", &qtd);
    int numeros[qtd];

    ler(numeros, 0, qtd);
    inverso(numeros, qtd);
    printf("\n");
    return 0;
}