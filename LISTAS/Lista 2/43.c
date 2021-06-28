#include <stdio.h>

int comparador(int a, int b, int c)
{
    if (a == b && b == c){
        return 1;
    } else if(a != b && b != c && a != c){
        return 2;
    } else{
        return 3;
    }
}


int main()
{
    int n1, n2, n3;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    printf("%d\n", comparador(n1, n2, n3));
   
    return 0;
}