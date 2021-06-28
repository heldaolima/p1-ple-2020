#include <stdio.h>

int main()
{
    int a;
    char letra;

    scanf("%d", &a);

    getchar();
    
    scanf("%c", &letra);

    printf("[%d] [%c]\n", a, letra);
    return 0;
}