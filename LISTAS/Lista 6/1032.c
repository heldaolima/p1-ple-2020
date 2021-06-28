#include <stdio.h>

int tocas(int a[], int i, int tam, int resp)
{
    if (i == tam)
    {
        return resp;
    }
    int u = solve(a, a[i+1], i+1, i);
    printf("u: %d\n", u);
    tocas(a, i+1, tam, resp);
}

int tocast(int a[], int i, int tam, int resp, int valor)
{
    if (i == tam)
    {
        return resp;
    }
    
    else if (i == valor) //a toca segue
    {
        return tocast(a, i+1, tam, resp, a[i]);
    }
    else // a toca acabou
    {
        return tocast(a, i+1, tam, resp+1, a[i]);
    }
}

void ler(int b[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    
    scanf("%d", &b[i]);
    ler(b, i+1, tam);
}

int main()
{
    int n, resp;
    scanf("%d", &n);
    
    int a[n];
    
    ler(a, 0, n);
        
    //resp = tocas(a, 1, n, 1, a[0]);
    resp = tocas(a, 0, n, 0);
    printf("%d\n", resp);

    return 0;
}