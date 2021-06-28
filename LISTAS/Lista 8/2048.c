#include <stdio.h>

int comparar(int a[], int b[], int i, int resp)
{
    if (i == 10) return resp;

    for (int j = 0; j < 6; j++)
    {
        if (b[i] == a[j]) resp++;
    }
    return comparar(a, b, i+1, resp);
}

void apostas(int n, int m[][10], int a[], int i, int j, int resp)
{
    if (i == n)
    {
        printf("Total de ganhadores: %d\n", resp);
        return;
    }
    int b[10], r; //comparar um valor da linha com todos os da array, somar.
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            b[y] = m[i][x+y];
        }
        r = comparar(a, b, 0, 0);
        if (r >= 6)
        {
            resp++;
            break;
        }
    }
    apostas(n, m, a, i+1, j, resp);
}

void lera(int a[], int i)
{
    if (i == 6)
    {
        return;
    }
    scanf("%d", &a[i]);
    lera(a, i+1);
}

void lerm(int n, int m[][10], int l, int c)
{
    if (l == n) return;
    scanf("%d", &m[l][c]);
    char a = getchar();
    if (a == ','){
        lerm(n, m, l, c+1);
    }
    else
    {
        lerm(n, m, l+1, 0);
    }
}

int main()
{
    int n, resultado[6];
    scanf("%d", &n);
    
    int aps[n][10];
    lerm(n, aps, 0, 0);

    lera(resultado, 0);

    apostas(n, aps, resultado, 0, 0, 0);

    return 0;
}