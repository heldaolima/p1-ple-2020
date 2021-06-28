#include <stdio.h>

int muralha(int qtd, int passo, char ultimo, int x, int y, int moeda)
{
    printf("qtd: %d passo: %d x: %d y: %d moeda: %d\n", qtd, passo, x, y, moeda);
    if (passo > qtd)
    {
        return moeda;
    }
    else
    {
        char direcao;
        scanf(" %c", &direcao);

        if (direcao == 'D') //x+1
        {
            if (x > y)
            {
                return muralha (qtd, passo+1, direcao, x+1, y, moeda);
            }
            else if (x == y)
            {
                if (passo != 1 && ultimo == 'D')
                {
                    return muralha(qtd, passo+1, direcao, x+1, y, moeda+1);
                }
                else
                {
                    return muralha(qtd, passo+1, direcao, x+1, y, moeda);
                }
            }
            else
            {
                return muralha(qtd, passo+1, direcao, x+1, y, moeda);
            }
        }
        else if (direcao == 'C') //y+1
        {
            if (y > x)
            {
                return muralha(qtd, passo+1, direcao, x, y+1, moeda);
            }
            else if (y == x)
            {
                if (passo != 1 && ultimo == 'C')
                {
                    return muralha(qtd, passo+1, direcao, x, y+1, moeda+1);
                }
                else
                {
                    return muralha(qtd, passo+1, direcao, x, y+1, moeda);
                }
            }
            else
            {
                return muralha(qtd, passo+1, direcao, x, y+1, moeda);
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);  //qtd de movimentos
    int result = muralha(n, 1, '/', 0, 0, 0);
    printf("%d\n", result);
    return 0;
}

//abaixo --> estar nela --> cima
//em cima --> estar nela --> abaixo


//se a posicao for x = y; 
//se o lado é embaixo e o comando for cima, atravessou
//se o lado é embaixo e o comando for direita, voce atravessou
//cima cima ou direita direita, se antes ele estava num ponto em que 
//pudesse atravessar a reta (x = y, em cima da reta)
// reta y - x = 0
// comeca na (0, 0)
// posicao (x, y)
// direita (x+1, y)
// cima (x, y+1)
//