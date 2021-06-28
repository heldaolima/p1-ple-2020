#include <stdio.h>

void soma(int ordem, int m[][ordem], int n[][ordem], int l, int c)
{
    if (c == ordem)
    {
        c = 0;
        l += 1;
    }

    if (l == ordem)
    {
        return;
    }
    printf("%d\n", m[l][c]+n[l][c]);
    soma(ordem, m, n, l, c+1);
}

void ler(int tam, int m[][tam], int l, int c)
{
    if (c == tam)
    {
        c = 0;
        l += 1;
    }

    if (l == tam)
    {
        return;
    }

    scanf("%d", &m[l][c]);
    ler(tam, m, l, c+1);
}

int main()
{
    int ordem;
    scanf("%d", &ordem);
    if (ordem == 0)
    {
        printf("Vazia\n");
    }
    
    int m[ordem][ordem], n[ordem][ordem];
    
    ler(ordem, m, 0, 0);
    ler(ordem, n, 0, 0);

    soma(ordem, m, n, 0, 0);
    return 0;
}