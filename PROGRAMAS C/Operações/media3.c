#include <stdio.h>
#include <stdlib.h>

double media_de_3(double n1, double n2, double n3)
{
    return (n1 + n2 + n3) / 3.0;
}

int main()
{
    printf("-- MÉDIA DE TRÊS NÚMEROS --\n");

    double x, y, z, calculo;

    scanf("%lf%lf%lf", &x, &y, &z);

    calculo = media_de_3(x, y, z);
    printf("Média = %.2lf\n", x, y, z, calculo);
    
    return 0;
}