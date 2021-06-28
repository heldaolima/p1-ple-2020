#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);

    int i;
    for (i = 1; i <= 9; i++){
        printf("%d X %d = %d\n", num, i, i*num);
    }
    return 0;
}