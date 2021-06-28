#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    if (0 <= a <= 10 && 0 <= b <= 10 && 0 <= c <= 10){
        double media = (a*2 + b*3 + c*5)/(2 + 3 + 5);
        printf("MEDIA = %.1lf\n", media);
    }
    
    return 0;
}