#include <stdio.h>

int diagonal(int m[][3], int l, int c, int tam, int tot)
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

    if (l == c)
    {
        return diagonal(m, l, c+1, tam, tot);
    }
    else
    {
        return diagonal(m, l, c+1, tam, tot+m[l][c]);
    }
}

int menor(int m[][3], int l, int c, int tam, int men)
{
    if (c == tam)
    {
        c = 0;
        l += 1;
    }
    
    if (l == tam)
    {
        return men;
    }

    if (m[l][c] < men)
    {
        return menor(m, l, c+1, tam, m[l][c]);
    }
    return menor(m, l, c+1, tam, men);
}

double ler(int m[][3], int l, int c, int tam, double mediapos, int contpos)
{
    if (c == tam)
    {
        c = 0;
        l += 1;
    }
    
    if (l == tam)
    {
        return mediapos/contpos;
    }

    scanf("%d", &m[l][c]);
    if (m[l][c] > 0)
    {
        return ler(m, l, c+1, tam, mediapos+m[l][c], contpos+1);
    }
    return ler(m, l, c+1, tam, mediapos, contpos);
}

int main()
{
    int matriz[3][3], min, delta, soma;
    double mediapos;
    mediapos = ler(matriz, 0, 0, 3, 0, 0);

    min = menor(matriz, 0, 1, 3, matriz[0][0]);
    
    delta = 0;
    if (min % 2 == 0)
    {
        delta = 1;
    }
    
    soma = diagonal(matriz, 0, 0, 3, 0);

    printf("%.2lf %d %d %d\n", mediapos, min, delta, soma);
    return 0;
}