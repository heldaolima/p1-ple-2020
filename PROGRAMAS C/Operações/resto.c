#include <stdio.h>

int resto(int n1, int n2)
{
    int z;
    z = n1 % n2;
    
    printf("O resto da divisão %d/%d é: %d\n", n1, n2, z);

}

int main()
{
    resto(5, 3);

    return 0;
}