#include <stdio.h>

int comparar(int b[], int a[], int i)
{
    if (i == 9)
    {
        return 0;
    }
    if (b[i] == a[i])
    {
        return 1 + comparar(b, a, i+1);
    }
    return comparar(b, a, i+1);
}

void bubble(int arr[], int i, int fim)
{
    if (i < (fim-1))
    {
        if (arr[i] > arr[i+1])
        {
            int aux = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = aux;
        }

        bubble(arr, i+1, fim);
    }
}

void sort(int arr[], int i, int tam)
{
    if (i < (tam-1))
    {
        bubble(arr, i, tam);
        sort(arr, i, tam-1);
    }
}


void forma_b2(int b[], int m[][9], int i, int j)
{
    if (i == 9)
    {
        return;    
    }
    b[i] = m[i][j];
    forma_b2(b, m, i+1, j);
}

void forma_b1(int b[], int m[][9], int i, int j)
{
    if (j == 9)
    {
        return;    
    }
    b[j] = m[i][j];
    forma_b1(b, m, i, j+1);
}

//i linha j coluna
int analise(int m[][9], int a[], int i, int j)
{
    if (j == 9)
    {
        j = 0;
        i += 1;
    }

    if (i == 9)
    {
        return 0;
    }
    
    int b[9], res1, res2;
    
    forma_b1(b, m, i, 0);
    sort(b, 0, 9);
    
    res1 = comparar(b, a, 0);
    
    forma_b2(b, m, 0, j);
    sort(b, 0, 9);
    
    res2 = comparar(b, a, 0);
    
    if (res1 == 9 && res2 == res1)
    {
        return 1 + analise(m, a, i, j+1);
    }
    return analise(m, a, i, j+1);
}


void ler(int e[][9], int i, int j, int tam)
{
    if (j == tam)
    {
        j = 0;
        i += 1;
    }

    if (i == tam)
    {
        return;
    }
    scanf("%d", &e[i][j]);
    ler(e, i, j+1, tam);
}

void algo(int num, int i)
{
    if (i == num)
    {
        return;
    }

    int m[9][9];
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};


    ler(m, 0, 0, 9);
    int resp = analise(m, a, 0, 0);
    printf("Instancia %d\n", i+1);
    if (resp == 81)
    {
        printf("SIM\n");
    }
    else
    {
        printf("NAO\n");
    }
    printf("\n");
    algo(num, i+1);
}

int main()
{
    int n;
    scanf("%d", &n);

    algo(n, 0);
    
    return 0;
}