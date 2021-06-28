#include <stdio.h>

int multiplos_interv(int num, int inicio, int fim, int cont)
{
    if (inicio > fim || fim < num)
    {
        return cont;
    }
    else
    {
        if (inicio % num == 0)
        {
            printf("%d\n", inicio);
            return multiplos_interv(num, inicio+1, fim, cont+1);
        }
        else
        {
            return multiplos_interv(num, inicio+1, fim, cont);
        }
    }
    
}


int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int result = multiplos_interv(a, b, c, 0);
    if (result == 0)
    {
        printf("INEXISTENTE\n");
    }
    return 0;
}