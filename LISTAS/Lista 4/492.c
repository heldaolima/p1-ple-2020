#include <stdio.h>

int capsulas(int inicio, int fim, int acum)
{
    if (inicio > fim)
    {
        printf("%d\n", acum);
        int xicaras = acum * 2 / 7;
        printf("%d\n", xicaras);
    }
    else
    {
        int quant, caps;
        char tipo;
        scanf("%d", &quant);
        scanf(" %c", &tipo);

        if (tipo == 'p' || tipo == 'P')
        {
            caps = quant * 10;
        }
        else if (tipo == 'g' || tipo == 'G')
        {
            caps = quant * 16;
        }
        capsulas(inicio+1, fim, acum+caps);
    }
}

int main()
{
    capsulas(1, 7, 0);
    return 0;
}