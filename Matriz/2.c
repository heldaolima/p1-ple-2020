#include <stdio.h>

void mostrar_matriz(int nl, int nc, int m[][nc], int i, int j)
{
    if (j == nc)
    {
        j = 0;
        i += 1;
    }

    if (i < nl)
    {
        if (j == nc-1)
        {
            printf("%d\n", m[i][j]);
        }
        else
        {
            printf("%d\t", m[i][j]);
        }
        mostrar_matriz(nl, nc, m, i, j+1);
    }
}

void adicao(int nl, int nc, int a[][nc], int b[][nc], int r[][nc], int i, int j)
{
    if (j == nc)
    {
        j = 0;
        i += 1;
    }

    if (i < nl)
    {
        r[i][j] = a[i][j] + b[i][j];
        adicao(nl, nc, a, b, r, i, j+1);
    }
}

void ler_matriz(int nl, int nc, int m[][nc], int i, int j)
{
    if (j == nc)
    {
        j = 0;
        i += 1;
    }

    if (i < nl)
    {
        scanf("%d", &m[i][j]);
        ler_matriz(nl, nc, m, i, j+1);
    }
}

int main()
{
    int i, j;
    scanf("%d%d", &i, &j);
    
    int a[i][j], b[i][j], result[i][j];
    
    ler_matriz(i, j, a, 0, 0);
    ler_matriz(i, j, b, 0, 0);

    adicao(i, j, a, b, result, 0, 0);

    mostrar_matriz(i, j, result, 0, 0);

    return 0;
}