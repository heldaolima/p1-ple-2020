#include <stdio.h>

int main()
{
    int l1, l2, l3;
    scanf("%d%d%d", &l1, &l2, &l3);

    if (l1 == l2 && l2 == l3){
        printf("equilatero\n");
    } else if(l1 != l2 && l2 != l3 && l1 != l3){
        printf("escaleno\n");
    } else{
        printf("isosceles\n");
    }
   
    return 0;
}