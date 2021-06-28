#include <stdio.h>

int check_col(int m[][8], int i, int j, int l)
{
    int resp = 0;
    if (l > i) // se o rei está "abaixo" no tab
    {
        for (int a = i+1; a < l; a++) //descer pelas linhas
        {
            if (m[a][j] == 1 || m[a][j] == 2) resp++;
        }
    }
    else // se o rei está "acima" no tabuleiro
    {
        for (int a = i-1; a > l; a--) //subir pelas linhas
        {
            if (m[a][j] == 1 || m[a][j] == 2) resp++;
        }
    } 

    return resp;
}

int check_lin(int m[][8], int i, int j, int c)
{
    int resp = 0;
    if (c > j) //se o rei está à direita
    {
        for (int a = j+1; a < c; a++)
        {
            if (m[i][a] == 1 || m[i][a] == 2) resp++;
        }
    }
    else //se o rei está à esquerda
    {
        for (int a = j-1; a > c; a--)
        {
            if (m[i][a] == 1 || m[i][a] == 2) resp++;
        }
    }
    return resp;
}

int torre(int m[][8], int l, int c)
{
    int resp = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i == l || j == c)
            {
                if (m[i][j] == 1)
                {
                    if (i == l)
                    { 
                        if (check_lin(m, i, j, c) == 0) resp++;
                    }
                    if (j == c)
                    {
                        if (check_col(m, i, j, l) == 0) resp++;
                    }
                } 
            }
            //printf("resp: %d\n", resp); 
        }
    }
    return resp;
}

int analise(int m[][8], int i, int j)
{
    int resp = 0;

    if (j == 8)
    {
        j = 0;
        i++;
    }
    if (i == 8) return resp;

    if (m[i][j] == 3)
    {
        if (i+1 < 8)
        {
            if (m[i+1][j] == 0)
            {
                if (torre(m, i+1, j) != 0) resp++;
            }
            if (m[i+1][j+1] == 0 && j+1 < 8)
            {
                if (torre(m, i+1, j+1) != 0) resp++;
            }
            if (m[i+1][j-1] == 0 && j-1 >= 0)
            {
                if (torre(m, i+1, j-1) != 0) resp++;
            } 
        }
        if (i-1 >= 0)
        {
            if (m[i-1][j] == 0)
            {
                if (torre(m, i-1, j) != 0) resp++;
            } 
            if (m[i-1][j+1] == 0 && j+1 < 8)
            {
                if (torre(m, i-1, j+1) != 0) resp++;
            } 
            if (m[i-1][j-1] == 0 && j-1 >= 0)
            {
                if (torre(m, i-1, j-1) != 0) resp++;
            } 
        }

        if (j+1 < 8)
        {
            if (m[i][j+1] == 0)
            {
                if (torre(m, i, j+1) != 0) resp++;
            } 
        }
        if (j-1 < 8)
        {
            if (m[i][j-1] == 0)
            {
                if (torre(m, i, j-1) != 0) resp++;
            } 
        }
        return resp;
    }
}


int possibilidades(int m[][8], int i, int j)
{
    int resp = 0;

    if (j == 8)
    {
        j = 0;
        i++;
    }

    if (i == 8) return resp;

    if (m[i][j] == 3)
    {
        if (i+1 < 8)
        {
            if (m[i+1][j] == 0) resp++;
            if (m[i+1][j+1] == 0 && j+1 < 8) resp++;
            if (m[i+1][j-1] == 0 && j-1 >= 0) resp++;
        }
        if (i-1 >= 0)
        {
            if (m[i-1][j] == 0) resp++;
            if (m[i-1][j+1] == 0 && j+1 < 8) resp++;
            if (m[i-1][j-1] == 0 && j-1 >= 0) resp++;
        }

        if (j+1 < 8)
        {
            if (m[i][j+1] == 0) resp++;
        }
        if (j-1 < 8)
        {
            if (m[i][j-1] == 0) resp++;
        }
        return resp;
    }
    return possibilidades(m, i, j+1);
}

void ler(int n, int m[][n])
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &m[i][j]);
        }
    }
}

void jogada()
{
    int m[8][8], poss, r;
    ler(8, m);
    
    poss = possibilidades(m, 0, 0);
    printf("pos: %d\n", poss);
    r = analise(m, 0, 0);
    printf("resp: %d\n", r);
    
    if (r == poss) printf("Yes\n");
    else printf("No\n");
    return;

}

int main()
{
    int n, r;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        jogada();
    }
    return 0;
}