#include <stdio.h>

int main()
{
    double valor;
    scanf("%lf", &valor);

    double total = valor + (valor * 0.1);

    printf("%.2lf\n", total);

    return 0;
}