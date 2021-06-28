#include <stdio.h>

//tudo for
void mostrar_matriz_for(int l, int c, int m[][c])
{
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            if (j + 1 == c)
            {
                printf("%d\n", m[i][j]);
            }
            else
            {
                printf("%d\t", m[i][j]);
            }
        }
    }
}

void soma_for(int l, int c, int a[][c], int b[][c], int r[][c])
{
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            r[i][j] = a[i][j] + b[i][j];
        }
    }
}

void ler_matriz_for(int l, int c, int m[][c])
{
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &m[i][j]);
        }
    }
}

int main()
{
    int l, c;
    scanf("%d %d", &l, &c);

    int a[l][c], b[l][c], resp[l][c];

    ler_matriz_for(l, c, a);
    ler_matriz_for(l, c, b);

    soma_for(l, c, a, b, resp);
    
    mostrar_matriz_for(l, c, resp);

    return 0;
}