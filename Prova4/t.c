#include <stdio.h>

int caminho(int n, int m[][n], int i, int j, int lastI, int lastJ)
{
    if (m[0][0] == 1)
    {
        if (i == n-1 && j == n-1) return 1;
        else
        {
            if (m[i+1][j] == 1 && (i+1 != lastI)) return caminho(n, m, i+1, j, i, j);
            else if (m[i][j+1] == 1 && (j+1 != lastJ)) return caminho(n, m, i, j+1, i, j);
            else if (m[i][j-1] == 1 && (j-1 != lastJ)) return caminho(n, m, i, j-1, i, j);
            else if (m[i-1][j] == 1 && i-1 != lastI) return caminho(n, m, i-1, j, i, j);
            else return 0;
        }
    }
    else return 0;
}

void ler(int n, int m[][n])
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &m[i][j]);
        }
    }
}

int main()
{
    int n, r;
    scanf("%d", &n);

    int mat[n][n];
    ler(n, mat);
    
    r = caminho(n, mat, 0, 0, 0, 0);
    
    if (r == 1) printf("OK\n");
    else printf("NOT OK\n");

    return 0;
}