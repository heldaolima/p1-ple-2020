#include <stdio.h>

int secundariaErros(int m[][3], int l, int c, int resp)
{
    if (c == 3)
    {
        c = 0;
        l = l+1;
    }
    if (l == 3)
    {
        return resp;
    }
    if (m[l][c] == 1)
    {
        if (l == 0)
        {
            if (c != 2)
            {
                return secundariaErros(m, l, c+1, resp+1);
            }
            return secundariaErros(m, l, c+1, resp);
        }
        else if (l == 1)
        {
            if (c != 1)
            {
                return secundariaErros(m, l, c+1, resp+1);
            }
            return secundariaErros(m, l, c+1, resp);
        }
        else if (l == 2)
        {
            if (c != 0)
            {
                return secundariaErros(m, l, c+1, resp+1);
            }
            return secundariaErros(m, l, c+1, resp);
        } 
    }
    return secundariaErros(m, l, c+1, resp);
}

int isSecundaria(int m[][3], int l, int sec, int resp)
{
    if (l == 3)
    {
        return resp;
    }

    if (m[l][sec] == 1)
    {
        return isSecundaria(m, l+1, sec-1, resp+1);
    }
    return isSecundaria(m, l+1, sec-1, resp);
}


int principalErros(int m[][3], int l, int c, int resp)
{
    if (c == 3)
    {
        c = 0;
        l = l+1;
    }
    if (l == 3)
    {
        return resp;
    }
    if (m[l][c] == 1)
    {
        if (l == 0)
        {
            if (c != 0)
            {
                return principalErros(m, l, c+1, resp+1);
            }
            return principalErros(m, l, c+1, resp);
        }
        else if (l == 1)
        {
            if (c != 1)
            {
                return principalErros(m, l, c+1, resp+1);
            }
            return principalErros(m, l, c+1, resp);
        }
        else if (l == 2)
        {
            if (c != 2)
            {
                return principalErros(m, l, c+1, resp+1);
            }
            return principalErros(m, l, c+1, resp);
        }
    }
    return principalErros(m, l, c+1, resp);
}

int isPrincipal(int m[][3], int l, int c, int resp)
{
    if (c == 3)
    {
        c = 0;
        l = l+1;
    }
    if (l == 3)
    {
        return resp;
    }
    if (m[l][c] == 1)
    {
        if (l == c)
        {
            return isPrincipal(m, l, c+1, resp+1);
        }
    }
    return isPrincipal(m, l, c+1, resp);
}

int ler(int m[][3], int l, int c)
{
    if (c == 3)
    {
        c = 0;
        l = l+1;
    }
    if (l == 3)
    {
        return 0;
    }
    int res = scanf("%d", &m[l][c]);
    if (res == EOF)
    {
        return -1;
    }
    return ler(m, l, c+1);

}
void batalha(int vluke, int vvader, int rodada)
{
    int atackLuke[3][3], atackVader[3][3];
    
    int stopL, stopV;
    int luke, vader;

    stopL = ler(atackLuke, 0, 0);
    
    if (stopL == -1 || rodada > 10)
    {
        if (vluke == vvader)
        {
            printf("Houve empate.\n");
        }
        else if (vvader > vluke)
        {
            printf("Darth Vader venceu.\n");
        }
        else if (vluke > vvader)
        {
            printf("Luke Skywalker venceu.\n");
        }
        return;
    }

    stopV = ler(atackVader, 0, 0);
    
    luke = isPrincipal(atackLuke, 0, 0, 0);
    if (luke == 3)
    {
        luke = principalErros(atackLuke, 0, 0, 0);
        if (luke != 0)
        {
            luke = -1; //invalido
        }
        else
        {
            luke = 1; //valido, principal
        }
    }
    else
    {
        luke = isSecundaria(atackLuke, 0, 2, 0);
        if (luke == 3)
        {
            luke = secundariaErros(atackLuke, 0, 2, 0);
            if (luke != 0)
            {
                luke = -1; // invalido
            }
            else
            {
                luke = 2; //valido, secundario 
            }
        }
        else
        {
            luke = -1;
        }
    }
    
    vader = isPrincipal(atackVader, 0, 0, 0);
    if (vader == 3)
    {
        vader = principalErros(atackVader, 0, 0, 0);
        if (vader != 0)
        {
            vader = -1; //invalido
        }
        else
        {
            vader = 1; //valido, principal
        }
    }
    else
    {
        vader = isSecundaria(atackVader, 0, 2, 0);
        if (vader == 3)
        {
            vader = secundariaErros(atackVader, 0, 2, 0);
            if (vader != 0)
            {
                vader = -1; // invalido
            }
            else
            {
                vader = 2; //valido, secundario 
            }
        }
        else
        {
            vader = -1;
        }
    }
    
    if (luke == vader && (vader == 1 || vader == 2))
    {
        vluke -= 15;
        vvader -= 15;
    }
    else if (luke == -1 && (vader == 1 || vader == 2)) //vader ataca
    {
        vluke -= 15;
    }
    else if (vader == -1 && (luke == 1 || luke == 2)) //luke ataca
    {
        vvader -= 15;
    }
    
    
    batalha(vluke, vvader, rodada+1);

}

int main()
{
    int vluke, vvader;
    scanf("%d %d", &vluke, &vvader);

    batalha(vluke, vvader, 1);
    
    return 0;
}