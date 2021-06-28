#include <stdio.h>

int main()
{
    double salario, aumentado;
    scanf("%lf", &salario);

    if (salario > 500){
        aumentado = salario + (salario * 0.1);
    
    } else if (salario > 300 && salario <= 500){
        aumentado = salario + (salario * 0.07);
    
    } else{
        aumentado = salario + (salario * 0.05);
    }

    printf("%.2lf\n", aumentado);

    return 0;
}