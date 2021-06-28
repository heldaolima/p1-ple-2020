#include <stdio.h>

int main()
{
    int idade;
    scanf("%d", &idade);

    if (idade < 16){
        printf("nao eleitor\n");
    } else if (18 <= idade && idade <= 65){
        printf("eleitor obrigatorio\n");
    } else if((16 <= idade && idade < 18) || (idade > 65)){
        printf("eleitor facultativo\n");
    }
    
    return 0;
}