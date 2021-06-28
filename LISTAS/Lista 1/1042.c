#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    scanf("%d", &idade);

    int ano = 365*86400;
    int total = idade * ano;
    printf("%d", total);
    return 0;
}