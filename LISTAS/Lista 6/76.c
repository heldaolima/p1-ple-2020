#include <stdio.h>

double recorrente(double r[], int i, double maior, double indice)
{
    if (i == 11)
    {
        return indice;
    }
    
    if (r[i] > maior)
    {
        return recorrente(r, i+1, r[i], i);
    }
    return recorrente(r, i+1, maior, indice);
}

double correcao(char r[], char g[], int i)
{
    if (i == 10)
    {
        return 0.0;
    }

    if (r[i] == g[i])
    {
        return 1.0 + correcao(r, g, i+1);
    }
    return correcao(r, g, i+1);
}

void alunos(char gabarito[], double n[], int contaprov, double contot)
{
    int num;
    scanf("%d", &num);
    if (num == 9999)
    {
        double pcent = (contaprov*100)/contot;
        printf("%.1lf%%\n", pcent);
        printf("%.1lf\n", recorrente(n, 0, 0, 0));
        return;
    }
    
    char resps[10];
    scanf("%s", resps);
    double nota = correcao(resps, gabarito, 0);
    if (nota >= 6.0)
    {
        contaprov++;
    }
    if (nota == 0)
    {
        n[0] = n[0] + 1;
    }
    else if (nota == 1)
    {
        n[1] = n[1] + 1;
    }
    else if (nota == 2)
    {
        n[2] = n[2] + 1;
    }
    else if (nota == 3)
    {
        n[3] = n[3] + 1;
    }
    else if (nota == 4)
    {
        n[4] = n[4] + 1;
    }
    else if (nota == 5)
    {
        n[5] = n[5] + 1;
    }
    else if (nota == 6)
    {
        n[6] = n[6] + 1;
    }
    else if (nota == 7)
    {
        n[7] = n[7] + 1;
    }
    else if (nota == 8)
    {
        n[8] = n[8] + 1;
    }
    else if (nota == 9)
    {
        n[9] = n[9] + 1;
    }
    else if (nota == 10)
    {
        n[10] = n[10] + 1;
    }
    printf("%d %.2lf\n", num, nota);
    alunos(gabarito, n, contaprov, contot+1);
}

int main()
{
    char gabarito[11];
    double nvezes[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    scanf("%s", gabarito);
    alunos(gabarito, nvezes, 0, 0.0);
    return 0;
}