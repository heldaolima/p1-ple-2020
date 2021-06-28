#include <stdio.h>

int eco(int param)
{
    return param;
}

int main()
{
    int n;
    n = eco(20);

    printf("%d\n", n);
    
    return 0;
    
}