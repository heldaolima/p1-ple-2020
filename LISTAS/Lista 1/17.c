#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    
    int ant = num - 1;
    int suc = num +1;

    printf("%d %d", ant, suc);

    return 0;
}