#include <stdio.h>

int triangular(int num, int inicio, int cont)
{
    if (cont == 1 || inicio > num)
    {
        return cont;
    }
    else
    {
        int dois = inicio + 1;
        int tres = inicio + 2;
        if (inicio * dois * tres == num)
        {
            printf("%d * %d * %d = %d\n", inicio, dois, tres, num);
            return triangular(num, inicio+1, cont+1);
        }
        else
        {
            return triangular(num, inicio+1, cont);
        }
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    int result = triangular(num, 1, 0);    
    if (result == 0)
    {
        printf("Falso\n");
    }
    else
    {
        printf("Verdadeiro\n");
    }
    return 0;
}