#include <stdio.h>

int primo(int inicio, int num, int cont)
{
    if (num > 1)
    {
        int tot = num % inicio;
        if (inicio > num)
        {
            if (cont > 2)
            {
                return 0;
            }
            else
            {
                return 1; //verdadeiro
            }
        }
        else
        {
            if (tot == 0)
            {
                primo(inicio+1, num, cont+1);
            }
            else
            {
                primo(inicio+1, num, cont);
            }            
        }
    }
}

int testeZ(int obj, int passo)
{
    if (passo == obj)
    {
        return 0; // perdeu;
    }
    else if ((obj % passo == 0) && (primo(1, passo, 0) == 1))
    {
        return passo;
    }
    else
    {
        return testeZ(obj, passo+1);
    }

}

int testeProt(int obj, int passo)
{
    if (passo == obj)
    {
        return 0; //nao conseguiu
    }
    else if (obj % passo == 0 && passo % 2 == 0)
    {
        return passo;
    }
    else
    {
        return testeProt(obj, passo+1);
    }
}

int disputa(int rodada, int n, int jogadas)
{
    if (rodada % 2 != 0) //vez do Z
    {
        int resp = testeZ(n, 2);
        if (resp == 0) //z perdeu
        {
            printf("Protagonista\n");
            return jogadas;
        }
        else
        {
            return disputa(rodada+1, n/resp, jogadas+1);
        }

    }
    else
    {
        int resp = testeProt(n, 2);
        if (resp == 0)
        {
            printf("Z\n");
            return jogadas;
        }
        else
        {
            return disputa(rodada+1, n/resp, jogadas+1);
        }
    }
}

void ler()
{
    int n, nrodadas;
    scanf("%d", &n);
    if (n == -1)
    {
        return;
    }
    else
    {
        nrodadas = disputa(1, n, 0);
        printf("%d\n", nrodadas);
        ler();
    }
}

int main()
{
    ler();
    return 0;
}
