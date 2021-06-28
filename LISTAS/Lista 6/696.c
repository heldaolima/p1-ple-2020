#include <stdio.h>

int vezes_x(int a[], int tam, int x)
{
    if (tam == 0)
    {
        return 0;
    }

    if (a[tam-1] == x)
    {
        return 1 + vezes_x(a, tam-1, x);
    }
    return vezes_x(a, tam-1, x);
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
    int arr[10], x, result;
    ler(arr, 0, 10);
    scanf("%d", &x);
    result = vezes_x(arr, 10, x);
    printf("%d\n", result);
    return 0;
}