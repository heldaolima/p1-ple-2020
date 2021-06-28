#include <stdio.h>

int maiorq(int num, int tam, int obj)
{
    if (num <= obj)
    {
        return num;
    }
    return maiorq(num-tam, tam, obj);    
}

int menorq(int num, int tam, int obj)
{
    if (num >= obj)
    {
        return num;
    }
    return menorq(num+tam, tam, obj);
}

int circ(int a[], int tam, int i, int resp)
{
    if (i == tam)
    {
        return resp;
    }
    
    int obj;
    if (i % 2 == 0)
    {
        obj = resp + a[i];
        if (obj > tam-1)
        {
            obj = maiorq(obj, tam, tam-1);
        }    
    }
    else if (i % 2 != 0)
    {
        obj = resp - a[i];
        if (obj < 0)
        {
            obj = menorq(obj, tam, 0);
        }
    }
    
    return circ(a, tam, i+1, obj);
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
    int n, resp;
    scanf("%d", &n);
    int a[n];
    ler(a, 0, n);
    
    resp = circ(a, n, 0, 0);
    printf("%d\n", resp);
    
    return 0;
}