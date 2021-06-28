#include <stdio.h>

int indmai(int arr[], int i, int tam, int indice)
{
    //printf("i: %d indice %d\n", i, indice);
    if (i == tam)
    {
        return indice;
    }
    
    if (arr[i] > arr[indice])
    {
        indice = i;
    }
      
    return indmai(arr, i+1, tam, indice);
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
    printf("Índice do maior: %d\n", indmai(arr, 1, 10, 0));
    return 0;
}