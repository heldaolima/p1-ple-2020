#include <stdio.h>

int divisiveis_3(int i, int num, int cont)
{
    if (i > num)
    {
        return cont;
    }
    else
    {
        if (num % i == 0)
        {
            if (i % 3 == 0)
            {
                return divisiveis_3(i+1, num, cont+1);
            }
            else
            {
                return divisiveis_3(i+1, num, cont);
            }
        }
        else
        {
            return divisiveis_3(i+1, num, cont);
        }
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    int result = divisiveis_3(1, num, 0);
    if (result == 0)
    {
        printf("O numero nao possui divisores multiplos de 3!\n");
    }
    else{
        printf("%d\n", );
    }
    return 0;
}