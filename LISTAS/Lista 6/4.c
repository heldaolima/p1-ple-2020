#include <stdio.h>

void repet(int a[], int i, int tot)
{
    //printf("i: %d tot: %d\n", i, tot);
    if (tot == 0)
    {
        return;
    }
    
    else if (a[i] == a[tot-1])
    {
        if (i != tot-1)
        {
            a[i] = 0;
        }
    }    
    repet(a, i, tot-1);
}

int soma(int a[], int i, int tam)
{
    if (i == tam)
    {
        return 0;
    }

    repet(a, i, tam);
    return a[i] + soma(a, i+1, tam);

}

void colecoes(int f[], int j[], int m[], int i, int tam, int ij, int im)
{
    //printf("ij: %d im: %d\n", ij, im);
    if (i == tam)
    {
        return;
    }
    
    if (f[i] % 2 == 0)
    {
        j[ij] = f[i];
        colecoes(f, j, m, i+1, tam, ij+1, im);
    }
    else if (f[i] % 2 != 0)
    {
        m[im] = f[i];
        colecoes(f, j, m, i+1, tam, ij, im+1);
    }
}

int contmaria(int f[], int i, int tam)
{
    if (i == tam)
    {
        return 0;
    }
    
    if (f[i] % 2 != 0)
    {
        return 1 + contmaria(f, i+1, tam);
    }
    return contmaria(f, i+1, tam);
}

int contjose(int f[], int i, int tam)
{
    if (i == tam)
    {
        return 0;
    }
    
    if (f[i] % 2 == 0)
    {
        return 1 + contjose(f, i+1, tam);
    }
    return contjose(f, i+1, tam);
}

void ler(int f[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    scanf("%d", &f[i]);
    ler(f, i+1, tam);

}

void mostrar(int a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }

    printf("%d\n", a[i]);
    mostrar(a, i+1, tam);
}

int main()
{
    int n, contj, contm, totjo, totma;
    scanf("%d", &n);
    int fig[n];
    ler(fig, 0, n);
    contj = contjose(fig, 0, n);
    contm = contmaria(fig, 0, n);
    printf("%d\n%d\n", contj, contm);
    
    int jose[contj], maria[contm];
    colecoes(fig, jose, maria, 0, n, 0, 0);
    totjo = soma(jose, 0, contj);
    totma = soma(maria, 0, contm);
    if (totjo > totma)
    {
        printf("%d\n", totjo);
    }
    else
    {
        printf("%d\n", totma);
    }

    return 0;
}