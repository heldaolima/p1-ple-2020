#include <stdio.h>
#include <string.h>
#include <stdint.h>

void print(int r[], int i)
{
    if (r[i] == '\0')
    {
        printf("\n");
        return;
    }
    printf("%d", r[i]);

    print(r, i+1);
}

int somar(char n[], int tam_N, char m[], int tam_M, int r[], int tam_R, int sobra)
{
    // printf("tamN: %d tamM: %d\n", tam_N, tam_M);
    if (tam_N == 0) return 0;

    int soma, n1, n2;
    if (tam_M-1 >= 0)
    {
        n1 = n[tam_N-1] - '0';
        n2 = m[tam_M-1] - '0';
        // printf("N1: %d n2: %d\n", n1, n2);
        soma = n1 + n2 + sobra;
    }
    else
    {
        soma = (n[tam_N-1] - '0') + sobra;
    }
    
    if (soma > 9)
    {
        sobra = soma / 10;
        soma = soma % 10;
    }
    else sobra = 0;
    printf("%d", soma);
    
    r[tam_R-1] = soma;

    return 1 + somar(n, tam_N-1, m, tam_M-1, r, tam_R-1, sobra);

}

int main()
{
    int tam_N, tam_M, nT;
    char n[1000000], m[100000];

    fgets(n, 100000, stdin);
    fgets(m, 100000, stdin);
    
    tam_N = strlen(n)-2;
    tam_M = strlen(m);
    if (tam_M > tam_N) r[tam_M];

    if (tam_M > tam_N) //maior vai em cima;
    {
        int r[tam_M];
        nT = somar(m, tam_M, n, tam_N, r, tam_M, 0);
        for (int i = 0; i < nT; i++)
        {
            printf("%d", r[i]);
        }
        printf("\n");
    }
    else
    {
        int r[tam_M];
        nT = somar(n, tam_N, m, tam_M, r, tam_N, 0);
        for (int i = 0; i < nT; i++)
        {
            printf("%d", r[i]);
        }
        printf("\n");
    }
    
    

    return 0;
}