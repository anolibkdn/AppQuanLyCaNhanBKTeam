
#if !defined(MADI_H)
#define MADI_H
#include<iostream>

using namespace std;
/*xay dung cac buoc di*/
//dl
bool dongbac(int x, int y, int danhdau[][8])
{
    x += 2;
    y -= 1;
    if (x < 8 && y >= 0 && danhdau[x][y] == 0)
    {
        return true;
    }
    return false;
}
//dn
bool dongnam(int x, int y, int danhdau[][8])
{
    x += 2;
    y += 1;
    if (x < 8 && y < 8 && danhdau[x][y] == 0)
    {
        return true;
    }
    return false;
}
//nd
bool namdong(int x, int y, int danhdau[][8])
{
    x += 1;
    y += 2;
    if (x < 8 && y < 8 && danhdau[x][y] == 0)
    {
        return true;
    }
    return false;
}

//nt
bool namtay(int x, int y, int danhdau[][8])
{
    x -= 1;
    y += 2;
    if (x >= 0 && y < 8 && danhdau[x][y] == 0)
    {
        return true;
    }
    return false;
}
//tn
bool taynam(int x, int y, int danhdau[][8])
{
    x -= 2;
    y += 1;
    if (x >= 0 && y < 8 && danhdau[x][y] == 0)
    {
        return true;
    }
    return false;
}
//tb
bool taybac(int x, int y, int danhdau[][8])
{
    x -= 2;
    y -= 1;
    if (x >= 0 && y >= 0 && danhdau[x][y] == 0)
    {
        return true;
    }
    return false;
}
//bt
bool bactay(int x, int y, int danhdau[][8])
{
    x -= 1;
    y -= 2;
    if (x >= 0 && y >= 0 && danhdau[x][y] == 0)
    {
        return true;
    }
    return false;
}
//bd
bool bacdong(int x, int y, int danhdau[][8])
{
    x += 1;
    y -= 2;
    if (x < 8 && y >= 0 && danhdau[x][y] == 0)
    {
        return true;
    }
    return false;
}

#endif // MADI_H
