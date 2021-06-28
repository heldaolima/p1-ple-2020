#include <stdio.h>

int diagonal(int (*matriz)[3], int l, int c, int tam, int tot)
{
    if (c == tam)
    {
        c = 0;
        l += 1;
    }
    if (l == tam)
    {
        return tot;
    }
    if (c == l)
    {
        return diagonal(matriz, l, c+1, tam, tot+matriz[l][c]);
    }
    return diagonal(matriz, l, c+1, tam, tot);
}

int maior(int (*matriz)[3], int l, int c, int tam, int mai)
{
    if (c == tam)
    {
        c = 0;
        l += 1;
    }
    if (l == tam)
    {
        return mai;
    }

    if (matriz[l][c] > mai)
    {
        return maior(matriz, l, c+1, tam, matriz[l][c]);
    }
    return maior(matriz, l, c+1, tam, mai);
}


int ler(int (*matriz)[3], int l, int c, int tam, int tot)
{
    if (c == tam)
    {
        c = 0;
        l += 1;
    }
    if (l == tam)
    {
        return tot;
    }
    scanf("%d", &matriz[l][c]);
    ler(matriz, l, c+1, tam, tot+matriz[l][c]);
}

int main()
{
    int matriz[3][3], max, delta, diag;
    double tot;
    
    tot = ler(matriz, 0, 0, 3, 0);

    max = maior(matriz, 0, 1, 3, matriz[0][0]);
    
    delta = 0;
    if (max > 0)
    {
        delta = 1;
    }
    else if (max < 0)
    {
        delta = -1;
    }
    
    diag = diagonal(matriz, 0, 0, 3, 0);

    printf("%.2lf %d %d %d\n", tot/9, max, delta, diag);

    return 0;
}