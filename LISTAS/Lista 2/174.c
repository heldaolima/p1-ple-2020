#include <stdio.h>

int main()
{
    int preco, consumo;
    preco = 7;

    scanf("%d", &consumo);
    
    if (consumo >= 0 && consumo <= 10000){
        
        if (consumo > 10 && consumo <= 30){
            preco = preco + (consumo - 10);
        
        } else if (consumo > 30 && consumo <= 100){
            preco = preco + 20 + (2 * (consumo - 30));
        
        } else if (consumo > 100){
            preco = preco + 160 + (5 * (consumo - 100));
        }

        printf("%d\n", preco);   
    }

    return 0;
}