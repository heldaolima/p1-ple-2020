#include <stdio.h>

void sequencia(int x, int y, int z, int passo, int cont, int objcont)
{
    if (passo > y)
    {
        return;
    }
    if (cont != objcont)
    {
        printf("%d ", passo);
    }
    else
    {
        printf("%d\n", passo);
        objcont = objcont+x;
    }
    sequencia(x, y, z, passo+z, cont+1, objcont);

}

int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);

    sequencia(x, y, z, 1, 1, x);

    return 0;
}