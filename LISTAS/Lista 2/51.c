#include <stdio.h>

int main()
{
    int codigo, quantidade;
    double preco;
    scanf("%d%d", &codigo, &quantidade);
    
    if (codigo == 1){
        preco = quantidade * 5.30;
    
    } else if (codigo == 2){
        preco = quantidade * 6.00;
    
    } else if (codigo == 3){
        preco = quantidade * 3.20;

    } else if (codigo == 4){
        preco = quantidade * 2.50;
    
    }

    if (quantidade >= 15 || preco >= 40.0){
        preco = preco - (preco * 0.15);
    }

    printf("R$ %.2lf\n", preco);

    return 0;
}