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
            printf("repetido: %d\n", a[i]);
        }
        
    }
    
    repet(a, i, tot-1);
}

void analise(int a[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }

    repet(a, i, tam);
    analise(a, i+1, tam);

}

void ler(int l[], int i, int tot)
{
    if (i == tot)
    {
        return;
    }
    scanf("%d", &l[i]);
    ler(l, i+1, tot);
}

int main()
{
    int lista[10];
    ler(lista, 0, 10);
    analise(lista, 0, 10);
}