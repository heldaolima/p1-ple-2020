#include <stdio.h>

int euclides(int a, int d) // calcular euclides
{
    int resto = a % d;
    if (resto == 0)
    {
        return d;
    }
    else
    {
       return euclides(d, resto);
    }
}

void multeuclides(int comeco, int parada) // passar pelos valores e chamar euclides
{
    if (comeco > parada)
    {
        return;
    }
    else
    {
        int n1, n2;
        scanf("%d%d", &n1, &n2);
        printf("MDC(%d,%d) = %d\n", n1, n2, euclides(n1, n2));
        multeuclides(comeco+1, parada);
    }
}

int main()
{
    int vezes;
    scanf("%d", &vezes);
    multeuclides(1, vezes);
    return 0;
}