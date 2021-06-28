#include <stdio.h>

int main()
{
    
    double litros, desc, preco, bruto, final;
    char tipo;

    scanf("%lf", &litros);
    scanf(" %c", &tipo);

    if (tipo == 'A'){
        preco = 1.90;
        if (litros <= 20.0){
            desc = 0.03;
        } else{
            desc = 0.05;
        }
    } else if (tipo == 'G'){
        preco = 2.50;
        if (litros <= 20.0){
            desc = 0.04;
        } else{
            desc = 0.06;
        }
    } else if (tipo == 'D'){
        preco = 1.66;
        if (litros <= 25.0){
            desc = 0.0;
        } else{
            desc = 0.04;
        }
    }
    
    bruto = (preco * litros);
    final = bruto - (bruto * desc);

    printf("R$ %.2lf\n", final);
    
    return 0;
}