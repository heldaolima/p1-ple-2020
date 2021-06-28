#include <stdio.h>

int main()
{
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);

    double media = (n1 + n2 + n3) / 3.0;

    if (0 <= media && media <= 100){
        printf("A media do aluno foi %.2lf e ele foi ", media);
        if (media <= 40){
            printf("REPROVADO\n");
        } else if(media > 40 && media < 70){
            printf("FINAL\n");
        } else if(media >= 70 && media <= 100){
            printf("APROVADO\n");
        }
    } else{
        printf("Media invalida\n");
    }
        
    return 0;
}