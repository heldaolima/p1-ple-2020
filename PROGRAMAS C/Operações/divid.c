#include <stdio.h>

int dividir(int n1, int n2)
{
    int z;
    z = n1 / n2;
    
    printf("O resultado da divisão (%d / %d) que o fulano passou é %d\n", n1, n2, z);

}

int main()
{
    dividir(9, 3);

    return 0;   

}