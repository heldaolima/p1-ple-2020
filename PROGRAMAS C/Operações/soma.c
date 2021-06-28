#include <stdio.h>

int soma(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int n1, n2;
    n1 = 2;
    n2 = 4;
    
    int z;
    z = soma(n1, n2);

    printf("A soma entre %d e %d é %d\n", n1, n2, z);
    
    

    return 0;
}