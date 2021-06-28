#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    if (a == 0){
        printf("NEESG\n");
    } else{    
        double delta = pow(b, 2) - (4 * a * c);
        
        if (delta < 0){
            printf("NRR\n");

        } else {
            double deltaraiz = sqrt(delta);
            
            double raiz1 = (-b + deltaraiz) / (2 * a);
            double raiz2 = (-b - deltaraiz) / (2 * a);

            printf("%.2lf\n", raiz1);
            printf("%.2lf\n", raiz2);
        }

    }

    return 0;
}