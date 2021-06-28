#include <stdio.h>

int subtrair(int n1, int n2)
{
    return n1 - n2;

}

int main()
{
    int n1, n2;
    n1 = 10;
    n2 = 3;

    int z;
    z = subtrair(n1, n2);

    printf("%d\n", z);
    printf("%d menos %d é igual a %d\n", n1, n2, z);
    printf("%d\n", subtrair(n1, n2));

    return 0;
}