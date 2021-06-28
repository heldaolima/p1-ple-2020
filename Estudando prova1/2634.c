#include <stdio.h>

int main()
{
    int preco, consumo;
    preco = 7;
    printf("Digite o consumo de agua em m3:");
    scanf("%d", &consumo);
    
    if (consumo >= 0 && consumo <= 10000){
        
        if (consumo > 10 && consumo <= 30){
            preco = preco + (consumo - 10);
        
        } else if (consumo > 30 && consumo <= 100){
            preco = preco + 20 + (2 * (consumo - 30));
        
        } else if (consumo > 100){
            preco = preco + 160 + (5 * (consumo - 100));
        }

        printf("O valor a ser pago e de R$ %d\n", preco);   
    } else if (consumo < 0){
        printf("Numeros negativos nao sao aceitos\n");
    }

    return 0;
}