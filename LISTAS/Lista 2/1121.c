#include <stdio.h>

int main()
{
    double salario, comprometida;
    scanf("%lf%lf", &salario, &comprometida);
    
    double trintaporcen = salario * 0.3;
    
    if (comprometida <= trintaporcen){
        printf("%.2lf\n", trintaporcen - comprometida);
    } else{
        printf("0.00\n");
    }

    return 0;
}