#include <stdio.h>

int maior(int a[], int i, int tam, int mai)
{
    if (i == tam)
    {
        return mai;
    }
    else if (i == 0)
    {
        return maior(a, i+1, tam, a[i]);
    }
    else
    {
        if (a[i] > mai)
        {
            mai = a[i];
        }
        return maior(a, i+1, tam, mai);
    }
}

int menor(int a[], int i, int tam, int men)
{
    if (i == tam)
    {
        return men;
    }
    else if (i == 0)
    {
        return menor(a, i+1, tam, a[i]);
    }
    else
    {
        if (a[i] < men)
        {
            men = a[i];
        }
        return menor(a, i+1, tam, men);
    }
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
    int arr[6], men, mai;
    ler(arr, 0, 6);
    men = menor(arr, 0, 6, 0);
    mai = maior(arr, 0, 6, 0);
    printf("%d\n%d\n", men, mai);
    return 0;
}