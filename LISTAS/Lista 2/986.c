#include <stdio.h>

int main()
{
    int a, b, c, ano;
    scanf("%d%d%d", &a, &b, &c);

    if ((a == b || a == c || b == c) || (a + b == c || a + c == b || b + c == a)){
        printf("S\n");
    } else{
        printf("N\n");
    }
    
}