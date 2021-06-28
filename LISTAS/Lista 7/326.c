#include <stdio.h>

void sequencia(int x, int y, int passo, int obj)
{
    if (passo > y)
    {
        return;
    }
    
    if (passo != obj){
        printf("%d ", passo);
    }else{
        printf("%d\n", passo);
        obj = obj+x;
    }
    
    sequencia(x, y, passo+1, obj);
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    sequencia(x, y, 1, x);
    return 0;
}