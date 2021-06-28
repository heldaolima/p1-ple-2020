#include <stdio.h>

int main()
{
    double fah;
    scanf("%lf", &fah);

    double celsius = (fah-32)/1.8;

    printf("%.2lf", celsius);
    return 0;
}