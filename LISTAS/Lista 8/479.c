#include <stdio.h>

//falta considerar que os 1 s�o paredes!!!1

void labirinto(int nl, int nc, int m[][nc], char movs[], int k, int linic, int cinic, int qtdm)
{
    if (k > qtdm)
    {
        printf("(%d,%d)\n", linic, cinic);
        return;
    }

    if (movs[k] == 'D')
    { // coluna+1
        if (cinic +1 < nc && m[linic][cinic+1] != 0)
        {
            cinic = cinic + 1;
        }
    }
    else if (movs[k] == 'E')
    { //coluna-1
        if (cinic-1 >= 0 && m[linic][cinic-1] != 0)
        {
            cinic = cinic - 1;
        }
    }
    else if (movs[k] == 'C')
    { //linha-1
        if (linic-1 >=0 && m[linic-1][cinic] != 0)
        {
            linic = linic - 1;
        }
    }
    else if (movs[k] == 'B')
    { //linha+1
        if (linic+1 < nl && m[linic+1][cinic] != 0)
        {
            linic = linic + 1;
        }
    }
    
    labirinto(nl, nc, m, movs, k+1, linic, cinic, qtdm);
}

void lerv(char m[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    getchar();
    scanf("%c", &m[i]);
    lerv(m, i+1, tam);
}

void lerm(int l, int c, int e[][c], int i, int j)
{
    if (j == c)
    {
        j = 0;
        i += 1;
    }

    if (i == l)
    {
        return;
    }
    scanf("%d", &e[i][j]);
    lerm(l, c, e, i, j+1);

}

int main()
{
    int nl, nc, qtdm;
    scanf("%d%d", &nl, &nc);
    
    int m[nl][nc];
    lerm(nl, nc, m, 0, 0);

    scanf("%d", &qtdm);
    
    char movs[qtdm];
    lerv(movs, 0, qtdm);
    int linic, cinic;
    scanf("%d%d", &linic, &cinic);
    
    labirinto(nl, nc, m, movs, 0, linic, cinic, qtdm);

    return 0;
}