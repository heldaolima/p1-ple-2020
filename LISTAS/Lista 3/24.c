#include <stdio.h>

int fatorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * fatorial(n-1);
    }
}

void lerfat()
{
    int n;
    scanf("%d", &n);
    if (n == -1 || n > 12)
    {
        return;
    }
    else
    {
        printf("%d\n", fatorial(n));
        lerfat();
    }
}

int main()
{
    lerfat();
    return 0;
}