#include <stdio.h>

void bubble(int arr[], int i, int fim)
{
    if (i < (fim-1))
    {
        if (arr[i] > arr[i+1])
        {
            int aux = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = aux;
        }

        bubble(arr, i+1, fim);
    }
}

void sort(int arr[], int i, int tam)
{
    if (i < (tam-1))
    {
        bubble(arr, i, tam);
        sort(arr, i, tam-1);
    }
}

void ler(int arr[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    else
    {
        scanf("%d", &arr[i]);
        ler(arr, i+1, tam);
    }
}

int main()
{
    int arr[10];
    ler(arr, 0, 10);
    sort(arr, 0, 10);
    imprimir(arr, 0, 10);
    return 0;
}