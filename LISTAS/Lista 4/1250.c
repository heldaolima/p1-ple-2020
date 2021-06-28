#include <stdio.h>

void batalha(int v1, int v2, int d1, int d2, int vezesb, int vezesc, int cont)
{
    //printf("v1: %d v2: %d d1:%d d2:%d vezesb: %d vezesc: %d cont:%d\n", v1, v2, d1, d2, vezesb, vezesc, cont);
    if (v1 <= 0)
    {
        printf("Bezaliel\n");
    }
    else if (v2 <= 0)
    {
        printf("Clodes\n"); 
    }
    else
    {
        if (cont % 2 == 0)
        {
            if (vezesc <= vezesb)
            {
                batalha(v1, v2-d1, d1, d2, vezesb, vezesc-1, cont+1);
            }
            else
            {
                d1 = d1+50;
                vezesc = v2/d1;
                if (v2 % d1 != 0)
                {
                    vezesc++;
                }
                batalha(v1, v2, d1, d2, vezesb, vezesc, cont+1);
            }
        }
        else
        {
            batalha(v1-d2, v2, d1, d2, vezesb-1, vezesc, cont+1);
        }
    }
}

void ler_batalha(int qtd)
{
    if (qtd > 0)
    {
        int v1, v2, d1, d2, vezesb, vezesc;
        scanf("%d%d%d%d", &v1, &v2, &d1, &d2);
        
        if (1 <= v1 && 1 <= v2 && 1 <= d1 && 1 <= d2 && v1 <= 1000000 && v2 <= 1000000 && d1 <= 1000000 && d2 <= 1000000)
        {
            vezesb = v1/d2;
            if (v1 % d2 != 0)
            {
                vezesb = vezesb + 1;
            }
            vezesc = v2/d1;
            
            if (v2 % d1 != 0)
            {
                vezesc = vezesc + 1;
            } 
            batalha(v1, v2, d1, d2, vezesb, vezesc, 0);
        }
        ler_batalha(qtd - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    if (1 <= n && n <= 1000)
    {
        ler_batalha(n);
    }
        
    return 0;
}
