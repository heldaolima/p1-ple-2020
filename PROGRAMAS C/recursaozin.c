#include <stdio.h>
#include <math.h>

//recursãozinha; somatório
int soma(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return pow(2, n) + soma(n-1);
    }
}

void crescente(int n)
{
    if (n >= 1)
    {
        crescente(n-1);
        printf("%d\n", n);    
    }
    
}

void decrescente(int n)
{
    if (n >= 1)
    {
        printf("%d\n", n);
        decrescente(n-1);   
    }
}

void multiplos5(int a, int b)
{
    if (a <= b)
    {
        if (a % 5 == 0)
        {
            printf("%d\n", a);
        }
        multiplos5(a+1, b);
    }

}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    multiplos5(a, b);

    return 0;
}