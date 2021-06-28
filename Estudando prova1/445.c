#include <stdio.h>

int main()
{
    int dias, rodados;
    scanf("%d%d", &dias, &rodados);
    
    double quilometr, adicional;
    quilometr = dias * 90.0;

    if (rodados > (100 * dias)){
        adicional = 12.0 * (rodados - (100 * dias));
        quilometr = quilometr + adicional;
    }

    printf("%.2lf\n", quilometr);
    
    return 0;

}