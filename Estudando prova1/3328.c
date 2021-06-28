#include <stdio.h>

int main()
{
    int consumo;
    scanf("%d", &consumo);
    
    double preco, taxa, valor, total;
    if (consumo <= 99){
        preco = 1.35;
        taxa = 0.0;
    } else if (consumo > 99 && consumo <= 299){
        preco = 1.55;
        taxa = 0.0;
    } else if (consumo > 299 && consumo <= 574){
        preco = 1.75;
        taxa = 0.1;
    } else{
        preco = 2.15;
        taxa = 0.1;
    }

    valor = preco * consumo;
    total = valor + (valor * taxa);
    
    if (total < 35.0){
        total = 35.0;
    }

    printf("%.2lf\n", total);
    printf("%.2lf\n" , preco);
    return 0;
}