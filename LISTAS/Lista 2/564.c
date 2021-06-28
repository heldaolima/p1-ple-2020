#include <stdio.h>

int main()
{
    double velmax, velcar;
    scanf("%lf%lf", &velmax, &velcar);

    

    if (velcar <= velmax){
        printf("0.00\n0\n");
    
    } else {
        
        double vinte = velmax + (velmax * 0.2);
        double cinquenta = velmax + (velmax * 0.5);
        
        if (velcar <= vinte){
        printf("85.13\n4\n");
    
    } else if (velcar > vinte && velcar <= cinquenta){
        printf("127.69\n5\n");
    
    } else if (velcar > cinquenta){
        printf("574.62\n7\n");    
        }
    }
 return 0;
}