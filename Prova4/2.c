#include <stdio.h>

int secundaria(int n, int m[][n], int i, int j, int resp)
{
    if (i == n) return resp;

    return secundaria(n, m, i+1, j-1, resp+m[i][j]);
}

int principal(int n, int m[][n], int i, int j, int resp)
{
    if (i == n) return resp;

    return principal(n, m, i+1, j+1, resp+m[i][j]);
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
    int n, p, s;
    scanf("%d", &n);

    int m[n][n];
    ler(n, m);

    p = principal(n, m, 0, 0, 0);
    s = secundaria(n, m, 0, n-1, 0);

    if (p > s) printf("Principal\n");
    else if (s > p) printf("Secundaria\n");
    else printf("Empate\n");

    return 0;
}