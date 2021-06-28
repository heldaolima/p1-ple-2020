#include <stdio.h>
#include <stdlib.h>

int expressao(int n1, int n2){
    int calculo = 5 * n1 - (n2/(n2 % n1));
    return calculo;
}

int main()
{
    printf("%d\n", expressao(10, 5));
    return 0;
}