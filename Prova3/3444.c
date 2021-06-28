#include <stdio.h>

int comp(int c[], int b[], int i, int tam)
{
    if (i == tam)
    {
        return 0;
    }
    if (c[i] != b[i])
    {
        return 1 + comp(c, b, i+1, tam);
    }
    return comp(c, b, i+1, tam);
}

void solve(int a[], int c[], int i, int j, int tam)
{
    if (j == tam)
    {
        return;
    }
    c[j] = a[i];
    solve(a, c, i+1, j+1, tam);
}

int formar(int a[], int b[], int c[], int i, int n1, int n2, int menos)
{
    if (i > n1-n2)
    {
        imprimir(c, 0, n2);
        return menos;
    }
    int d[n2];
    
    solve(a, d, i, 0, n2);
    
    int resp = comp(d, b, 0, n2);
    if (i == 0)
    {
        return formar(a, b, d, i+1, n1, n2, resp);
    }
    else
    {
        if (resp < menos)
        {
            return formar(a, b, d, i+1, n1, n2, resp);
        }
        return formar(a, b, c, i+1, n1, n2, menos);
    }
}

void imprimir(int arr[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    if (i != tam-1)
    {
        printf("%d ", arr[i]);    
    }
    else
    {
        printf("%d", arr[i]);
    }
    
    imprimir(arr, i+1, tam);
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
    int n1, n2;
    scanf("%d", &n1);
    
    int a[n1];
    ler(a, 0, n1);
    
    scanf("%d", &n2);
    
    int b[n2], c[n2];
    ler(b, 0, n2);

    int resp = formar(a, b, c, 0, n1, n2, 0);

    printf("\n%d", resp);
    return 0;
}