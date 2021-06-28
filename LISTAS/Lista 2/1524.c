#include <stdio.h>

int main()
{
    double salario, porcentagem, aumento, nsalario;
    scanf("%lf", &salario);

    if (salario <= 280.0){
        porcentagem = 20;
        aumento = salario * 0.2;
        nsalario = salario + aumento;
        
    } else if (salario > 280.0 && salario <= 700.0){
        porcentagem = 15;
        aumento = salario * 0.15;
         nsalario = salario + aumento;

    } else if (salario > 700.0 && salario <= 1500.0){
        porcentagem = 10;
        aumento = salario * 0.1;
        nsalario = salario + aumento;

    } else if (salario > 1500){
        porcentagem = 5;
        aumento = salario * 0.05;
        nsalario = salario + aumento;
    }

    printf("%.2f\n", salario);
    printf("%.0f\n", porcentagem);
    printf("%.2f\n", aumento);
    printf("%.2f\n", nsalario);
    return 0;
}