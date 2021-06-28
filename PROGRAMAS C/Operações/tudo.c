#include <stdio.h>

int eco(int param)
{
    return param;
}

int soma(int n1, int n2)
{
    return n1 + n2;
}

int subtrair(int n1, int n2)
{
    return n1 - n2;

}

int multiplicar(int n1, int n2)
{
    printf("%d * %d = %d\n", 3, 4, n1 * n2);

}

int dividir(int n1, int n2)
{
    int z;
    z = n1 / n2;
    
    printf("O resultado da divisão (%d / %d) que o fulano passou é %d\n", n1, n2, z);

}

int resto(int n1, int n2)
{
    int z;
    z = n1 % n2;
    
    printf("O resto da divisão %d/%d é: %d\n", n1, n2, z);

}

int main()
{
    int mesmo;
    mesmo = eco(455);

    printf("Eco %d\n", mesmo);

    
    int mais;
    mais = soma(5, 9);

    printf("Soma %d\n", mais);

    
    int menos;
    menos =subtrair(10, 8);

    printf("Subtração %d\n", menos);


    multiplicar(4, 3);

    dividir(42, 4);

    resto(9, 2);
}