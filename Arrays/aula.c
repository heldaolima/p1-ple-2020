#include <stdio.h>

int achar_x(int arr[], int tamanho, int x)
{
    if (tamanho == 0)
    {
        return 0;
    }
    
    if (arr[tamanho-1] == x)
    {
        return 1 + achar_x(arr, tamanho-1, x);
    }
    else
    {
        return achar_x(arr, tamanho-1, x);
    }
}

void ler(int arr[], int i, int tamanho)
{
    if (i == tamanho)
    {
        return;
    }
    printf("arr[%d]: ", i);
    scanf("%d", &arr[i]);

    ler(arr, i+1, tamanho);
}

int main()
{
    int numeros[10];
    int x;

    ler(numeros, 0, 10);
    scanf("%d", &x);
    printf("Quantidade: %d\n", achar_x(numeros, 10, x));

    return 0;
}