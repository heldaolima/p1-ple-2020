#include <stdio.h>

int main()
{
    int numero, horas; 
    double valor;
    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%lf", &valor);

    double salario = horas * (valor);

    printf("NUMBER = %d\n", numero);
    printf("SALARY = R$ %.2lf\n", salario);
    return 0;
}