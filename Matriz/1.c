#include <stdio.h>

void imprimir_coluna(int num_lin, int num_col, double m[][num_col], int lin, int col)
{
    if (lin == num_lin)
    {
        printf("\n");
        lin = 0;
        col += 1;
    }

    if (col < num_col)
    {
        printf("%.1lf\t", m[lin][col]);
        imprimir_coluna(num_lin, num_col, m, lin+1, col);
    }
}

void imprimir_linha(int num_lin, int num_col, double m[][num_col], int lin, int col)
{
    if (col == num_col)
    {
        printf("\n");
        col = 0;
        lin += 1;
    }

    if (lin < num_lin)
    {
        printf("%.1lf\t", m[lin][col]);
        imprimir_linha(num_lin, num_col, m, lin, col+1);
    }
}

void ler_matriz(int num_lin, int num_col, double m[][num_col], int lin, int col)
{
    if (col == num_col)
    {
        col = 0;
        lin += 1;
    }

    if (lin < num_lin)
    {
        scanf("%lf", &m[lin][col]);
        ler_matriz(num_lin, num_col, m, lin, col+1);
    }
}

int main()
{
    int l = 5;
    int c = 4;

    double m[l][c];
    
    ler_matriz(l, c, m, 0, 0);
    
    imprimir_linha(l, c, m, 0, 0);
    
    printf("\n");
    
    imprimir_coluna(l, c, m, 0, 0);
}