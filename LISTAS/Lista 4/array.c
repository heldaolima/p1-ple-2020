#include <stdio.h>

void ler(int vetor[], int index, int tam)
{
    if (index == tam){
        return;
    }
    else
    {
        scanf("%d", &vetor[index]);
        ler(vetor, index+1, tam);
    }
    
}

void print(int vetor[], int index, int tam)
{
    if (index == tam){
        return;
    }
    else
    {
        printf("%d\n", vetor[index]);
        print(vetor, index+1, tam);
    }    
}

int main()
{
    int tam;
    scanf("%d", &tam);
    int vetor[tam];
    ler(vetor, 0, tam);
    print(vetor, 0, tam);
    return 0;
}