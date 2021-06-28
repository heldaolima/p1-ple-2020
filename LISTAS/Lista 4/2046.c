#include <stdio.h>

int eh_primo(int num, int passo, int cont)
{
    if (passo > num)
    {
        if (cont > 2)
        {
            return 0; //false
        }
        else
        {
            return 1; //True
        }
    }
    else
    {
        if (num % passo == 0)
        {
            return eh_primo(num, passo+1, cont+1);
        }
        else
        {
            return eh_primo(num, passo+1, cont);
        }
    }
}


int prox_primo(int num, int passo) // passo comeca com 1
{
    int result = eh_primo(passo, 1, 0);
    
    if (passo >= num && result == 1)
    {
        return passo;
    }
    else
    {
        return prox_primo(num, passo+1);
    }
}


double fatorial(double num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        return num * fatorial(num-1);
    }
}

double serie(int fim, int passo, double result)
{
    if (passo > fim)
    {
        return result;
    }
    else
    {
        if (passo < fim)
        {
            printf("%d!/%d +", passo, prox_primo(passo, 1));
        }
        else if (passo == fim)
        {
            printf("%d!/%d\n", passo, prox_primo(passo, 1));
        }
        
        double resultado = fatorial(passo)/prox_primo(passo, 1);
        return serie(fim, passo+1, result+resultado);   
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    double calculo = serie(num, 1, 0);
    printf("%.2lf\n", calculo);
    return 0;
}