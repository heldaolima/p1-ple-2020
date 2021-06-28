#include <stdio.h>

// MENOR DE 3; A MELHOR MANEIRA DE RESOLVER É ESSA AQUI, PODE CRER?

int main()
{
    int n1, n2, n3, menor;
    scanf("%d", &n1);
    menor = n1;

    scanf("%d", &n2);
    if (n2 < n1){
        menor = n2;
    }
    
    scanf("%d", &n3);
    if (n3 < menor){
        menor = n3;
    }

    printf("%d\n", menor);
    return 0;
}