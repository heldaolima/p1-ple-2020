#include <stdio.h>

int main()
{
    int estudante, idoso;
    scanf("%d%d", &estudante, &idoso);
    
    if (estudante == 1 || idoso == 1){
        printf("1\n");
    } else{
        printf("0\n");
    }

    return 0;
}