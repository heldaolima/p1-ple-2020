#include <stdio.h>

int ContaDigitosPares(int i, int num, int contpar)
{
    if (num < 10) // caso seja um numero entre 0 e 9
    {
        if (num % 2 == 0){
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        int div = num / i;
        if (div == 0)
        {
            return contpar;
        }
        else
        {
            int digito = div % 10;
            if (digito % 2 == 0)
            {
                return ContaDigitosPares(i*10, num, contpar+1);
            }
            else
            {
                return ContaDigitosPares(i*10, num, contpar);
            }
        }
    }
    
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", ContaDigitosPares(1, num, 0));
    return 0;
}