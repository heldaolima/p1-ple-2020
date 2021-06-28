#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    
    int prod1 = a * b;
    int prod2 = c * d;
    int subtr = prod1 - prod2;
    
    printf("DIFERENÇA = %d\n", subtr);
    
    return 0;
}