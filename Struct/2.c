//ponteiro
#include <stdio.h>

void teste (int * x)
{
    *x = 10;
}

int main()
{
    int a;
    a = 5;
    
    int * p = &a; //ponteiro para o inteiro 
    
    *p = 10;

    printf("%d\n", a);

    //scanf("%d", &a);

    
    return 0;
}