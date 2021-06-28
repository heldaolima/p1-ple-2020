#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter(char s[], int tam)
{
    if (tam == 0)
    {
        return;
    }
    
    printf("%c", s[tam-1]);
    inverter(s, tam-1);
}

int main()
{
    char string[255];
    scanf("%s", string);
    int tam = strlen(string);
    inverter(string, tam);
    printf("\n");
    return 0;
}