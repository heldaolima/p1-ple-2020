#include <stdio.h>

void ops(double m[][2], int i, int taml, double cred, double deb, double saldo)
{
    if (i == taml)
    {
        printf("Creditos: R$ %.2lf\n", cred);
        printf("Debitos: R$ %.2lf\n", deb);
        printf("Saldo: %.2lf\n", saldo);
        return;
    }
    if (m[i][0] == 1.0)
    {
        ops(m, i+1, taml, cred+m[i][1], deb, saldo+m[i][1]);
    }
    else if (m[i][0] == 0.0)
    {
        ops(m, i+1, taml, cred, deb+m[i][1], saldo-m[i][1]);
    }
}

int ler(double e[][2], int i, int j, int tam, int cont)
{
    if (j == tam)
    {
        cont = cont+1;
        j = 0;
        i += 1;
    }

    double n;
    scanf("%lf", &n);
    if (n == -1){
        return cont;
    } 
    else{
        e[i][j] = n;
    }
    return ler(e, i, j+1, tam, cont);
}

int main()
{
    double m[100][2];
    int taml;
    taml = ler(m, 0, 0, 2, 0);    

    ops(m, 0, taml, 0.0, 0.0, 0.0);    
    
    return 0;
}