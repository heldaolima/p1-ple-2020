#include <stdio.h>
#include <math.h>

//2192

int main()
{
    int d, r, l, p, g;
    scanf("%d%d%d%d%d", &d, &r, &l, &p, &g);

    int autonomia = l * 10;
    int falta = d - autonomia;
    int gastar = g * (falta / 10);
    int grana = r - gastar;
    int postosdist = d / (p+1);


    if (autonomia >= d){
        printf("Pode viajar.\nR$ %d\n", r);
    } else{
        if(p > 0 && gastar <= r){
            printf("Pode viajar.\nR$ %d\n", grana);

        } else if (gastar > r || p <= 0){ 
            printf("Nao pode viajar\n");
        } else if (postosdist > falta && gastar > r){
            printf("Nao pode viajar\n");
        } else{
            printf("Pode viajar\nR$ %d\n", grana);
        }
    }
     
    return 0;
}