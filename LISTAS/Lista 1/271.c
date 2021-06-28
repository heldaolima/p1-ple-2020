#include <stdio.h>

int main()
{
    double pi = 3.14159;
    double raiocm;
    scanf("%lf", &raiocm);
    double raiom = raiocm/100;

    double area = pi * (raiom * raiom);  

    printf("Area = %.4lf\n", area);
    return 0;
}