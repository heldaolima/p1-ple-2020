#include <stdio.h>

double soma_int(double x, double passo)
{
    if (passo > x)
    {
        return 0;
    }
    else
    {
        return passo + soma_int(x, passo+1);
    }

}

int denon(int num, int passo)
{
    if (passo > num)
    {
        return 0;
    }
    else
    {
        return soma_int(passo, 1) + denon(num, passo+1);
    }
}

double serie(int n, double p, int passo, double tot)
{
    int denominador = denon(n, 1); 
    if (passo > n)
    {
        return tot;
    }
    else
    {
        tot = tot + (soma_int(p, 1.0)/denominador)*passo;
    }
    return serie(n, p+1, passo+1, tot);   
}

int main()
{
    int n;
    double result;
    scanf("%d", &n);
    result = serie(n, 1.0, 1, 0.0);
    printf("%.2lf\n", result);

}