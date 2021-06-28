#include <stdio.h>

void obcecado(int inicio, int fim, int diaspro, int diaslin, int acumlinha, int dia)
{
    if (inicio > fim)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU A MEDIA DE PROGRAMAS: %d\n", diaspro);
        printf("QUANTIDADE DE DIAS QUE ATINGIU A MEDIA DE LINHAS: %d\n", diaslin);
        printf("DIA QUE MAIS PRODUZIU: ");
        if (dia == 1)
        {
            printf("DOMINGO\n");
        }
        if (dia == 2)
        {
            printf("SEGUNDA\n");
        }
        if (dia == 3)
        {
            printf("TERÇA\n");
        }
        if (dia == 4)
        {
            printf("QUARTA\n");
        }
        if (dia == 5)
        {
            printf("QUINTA\n");
        }
        if (dia == 6)
        {
            printf("SEXTA\n");
        }
        if (dia == 7)
        {
            printf("SABADO\n");
        }
    }
    
    else
    {
        int programas, linhas;
        int metapro = 0; 
        int metalin = 0;
        scanf("%d%d", &programas, &linhas);
           
        if (programas >= 5)
        {
            metapro = metapro + 1;
        }
        
        if (linhas >= 100)
        {
            metalin = metalin + 1;
        }

        if (inicio == 1)
        {
            obcecado(inicio+1, fim, diaspro+metapro, diaslin+metalin, acumlinha+linhas, inicio);
        }
        else
        {
            if (linhas > acumlinha)
            {
                obcecado(inicio+1, fim, diaspro+metapro, diaslin+metalin, linhas, inicio);
            }
            else
            {
                obcecado(inicio+1, fim, diaspro+metapro, diaslin+metalin, acumlinha, dia);
            }
        }    
    }
}

int main()
{
    obcecado(1, 7, 0, 0, 0, 0);
    return 0;
}