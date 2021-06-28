#include <stdio.h>

int rickception(int comeco, int final, int cont)
{
    if (cont == final)
    {
        return comeco;
    }
    else
    {
        if (cont % 2 == 0)
        {
            return rickception(comeco+3, final, cont+1);
        }
        else
        {
            return rickception(comeco + (comeco % 5), final, cont+1);
        } 
    }
}

int main()
{
    int tempo, camada;
    scanf("%d%d", &tempo, &camada);
    printf("%d\n", rickception(tempo, camada, 0));
    return 0;
}