#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    

    if (0 <= a <= 10 && 0 <= b <= 10)
    {
        double media = (a * 3.5 + b * 7.5) / (3.5 + 7.5);
        printf("MEDIA = %.5lf\n", media);
    }
    return 0;
}