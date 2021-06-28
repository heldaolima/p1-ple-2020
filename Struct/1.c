#include <stdio.h>

typedef struct { // pega um tipo e dá um nome para ele
    int codigo;
    int dia, mes, ano;
    int sexo;
} cliente;

int main()
{
    cliente c;
    c.codigo = 10;

    char teste = 65;
    printf("%c\n", teste);


    return 0;
}