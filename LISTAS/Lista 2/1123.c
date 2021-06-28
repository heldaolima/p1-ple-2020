#include <stdio.h>

int main()
{

    int propostos; 
    double resolvidos;
    scanf("%d%lf", &propostos, &resolvidos);
    
    double porcent;   
    porcent = (resolvidos * 100) / propostos;

    printf("%.2lf%% ", porcent);
    
    if (porcent >= 0.0 && porcent < 20.0)
    {
        printf("4.40%% Pessimo");

    } else if (porcent >= 20.0 && porcent < 40.0){
        printf("31.65%% Ruim");

    } else if (porcent >= 40.0 && porcent < 60.0){
        printf("56.82%% Bom");

    } else if (porcent >= 60.0 && porcent < 80.0){
        printf("80.00%% Muito Bom");

    } else if (porcent >= 80 && porcent <= 100){
        printf("94.00%% Excelente");

    }
    
    return 0;
}