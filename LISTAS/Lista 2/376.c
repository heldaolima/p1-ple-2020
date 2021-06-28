#include <stdio.h>

int main()
{
    char conceito;
    int livros, alunos;
    scanf("%d%d", &livros, &alunos);

    int quantidade = alunos / livros;

    if (quantidade <= 8){
        conceito = 'A';
    } else if (quantidade > 8 && quantidade <= 12){
        conceito = 'B';
    } else if (quantidade > 12 && quantidade <= 18){
        conceito = 'C';
    } else if (quantidade > 18){
        conceito = 'D';
    }

    printf("%c\n", conceito);

    return 0;
}