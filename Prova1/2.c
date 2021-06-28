#include <stdio.h>
#include <math.h>

int main()
{
    char sexo;
    int idade;
    char nacionalidade;
    double ingresso, desconto;

    desconto = 0.0;
    scanf("%c %d %c %lf", &nacionalidade, &idade, &sexo, &ingresso);
    if (idade <= 0 || idade > 120){
        printf("idade invalida!\n");
    } else if ((nacionalidade == 'F' || nacionalidade == 'C') && idade < 21){
        printf("nao pode comprar\n");
    } else
    {
        if (sexo == 'F')
        {
            desconto = 0.10;
        }
        if (nacionalidade == 'B'){
            desconto = 0.50;
        } else if (nacionalidade == 'A')
        {
            if (sexo == 'M' && idade >= 18){
                desconto = 0.0;
            } else if (sexo == 'F' && idade >= 18){
                desconto = 0.2;
            } else if (idade < 18){
                desconto = 0.2;
            }
        } else if (nacionalidade == 'F' || nacionalidade == 'C')
        {
            desconto = 0.3;    
        } else if (nacionalidade == 'I' || nacionalidade == 'R')
        {
            if (idade < 16){
                desconto = 0.4;
            } else{
                desconto = 0.3;
            }
        }
    ingresso = ingresso - (ingresso * desconto);
    printf("R$ %.2lf\n", ingresso);
    }   
    
    return 0;
}