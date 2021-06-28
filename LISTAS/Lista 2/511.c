#include <stdio.h>

int main()
{
    int homem, mais40;
    scanf("%d%d", &homem, &mais40);

    if (homem == 1){
        printf("0\n");
    } else if (homem == 0){
        if (mais40 == 0){
            printf("0\n");
        } else if (mais40 == 1){
            printf("1\n");
        }
    }
    
    return 0;
}