#include <stdio.h>

void pares_revers(int arr[], int tam)
{
    if (tam == 0)
    {
        return;
    }
    else
    {
        pares_revers(a, tam-1);
        if (arr[tam-1] % 2 == 0)
        {
            printf("%d ", arr[tam-1]);
        }
        pares_revers(arr, tam-1);
    }
}

void ler(int arr[], int tam, int i)
{
    if (i == tam)
    {
        return;
    }
    else
    {
        scanf("%d", &arr[i]);
        ler(arr, tam, i+1);
    }
}

int main()
{
    int arr[10];
    ler(arr, 10, 0);
    pares_revers(arr, 10);
    printf("\n");
    return 0;
}