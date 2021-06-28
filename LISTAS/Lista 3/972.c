#include <stdio.h>

int primos(int cont)
{
    if (cont > 2)
    {
        return 0; //falso 
    }
    else
    {
        return 1; // verdadeiro
    }
}

void verdivisores(int inicio, int num, int cont)
{
    if (num > 1)
    {
        int tot = num % inicio;
        if (inicio > num)
        {
            printf("%d\n", primos(cont));
        }
        else
        {
            if (tot == 0)
            {
                verdivisores(inicio+1, num, cont+1);
            }
            else
            {
                verdivisores(inicio+1, num, cont);
            }
            
        }
    } else
    {
        printf("%d\n", primos(3));
    }
    
}

void lerprimos()
{
    int num;
    scanf("%d", &num);
    if (num == -1) // parada
    {
        return;
    }
    else
    {
        verdivisores(1, num, 0);
        lerprimos();
    }
}

// 0 -- nao
// 1 -- sim
int main()
{
    lerprimos();
    return 0;
}