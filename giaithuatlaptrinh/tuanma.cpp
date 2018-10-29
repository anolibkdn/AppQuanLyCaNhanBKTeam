#include <iostream>
#include "madi.cpp"
using namespace std;

/*cap phat dong mang danh dau*/
// void taomangdanhdau(int **danhdau)
// {
//     danhdau = new int *[8];

//     for (int i = 0; i < 8; i++)
//     {
//         /* code */
//         danhdau[i] = new int[8];
//     }
// }
int timvet[2][64];

void matuan(int x, int y, int danhdau[][8], int i)
{
    /*dieu kien dung*/
    if (dongbac(x, y, danhdau) == false && dongnam(x, y, danhdau) == false && namdong(x, y, danhdau) == false && namtay(x, y, danhdau) == false &&
        taynam(x, y, danhdau) == false && taybac(x, y, danhdau) == false && bactay(x, y, danhdau) == false && bacdong(x, y, danhdau) == false)
    {

        for (int i = 0; i < 64; i++)
        {
            /* code */
            cout << "{" << timvet[0][i] << "," << timvet[1][i] << "}" << endl;
        }
        cout << "************************************" << endl;
        // for (int i = 0; i < 2; i++)
        // {
        //     /* code */
        //     for (int j = 0; j < 64; j++)
        //     {
        //         /* code */
        //         timvet[i][j] = 0;
        //     }
        // }
        // for (int i = 0; i < 8; i++)
        // {
        //     /* code */
        //     for (int j = 0; j < 8; j++)
        //     {
        //         /* code */
        //         danhdau[i][j] = 0;
        //     }
        // }
    }
    else
    {
        danhdau[x][y] = 1;
        timvet[0][i] = x;
        timvet[1][i] = y;
        if (dongbac(x, y, danhdau))
        {
            // x += 2;
            // y -= 1;
            // danhdau[x][y] = 1;
            matuan(x + 2, y - 1, danhdau, i + 1);
            danhdau[x + 2][y - 1] = 0;
        }
        if (dongnam(x, y, danhdau))
        {
            // x += 2;
            // y += 1;
            // danhdau[x][y] = 1;
            matuan(x + 2, y + 1, danhdau, i + 1);
            danhdau[x + 2][y + 1] = 0;
        }
        if (namdong(x, y, danhdau))
        {
            // x += 1;
            // y += 2;
            // danhdau[x][y] = 1;
            matuan(x + 1, y + 2, danhdau, i + 1);
            danhdau[x + 1][y + 2] = 0;
        }
        if (namtay(x, y, danhdau))
        {
            // x -= 1;
            // y += 2;
            // danhdau[x][y] = 1;
            matuan(x - 1, y + 2, danhdau, i + 1);
            danhdau[x - 1][y + 2] = 0;
        }
        if (taynam(x, y, danhdau))
        {
            // x -= 2;
            // y += 1;
            // danhdau[x][y] = 1;
            matuan(x - 2, y + 1, danhdau, i + 1);
            danhdau[x - 2][y + 1] = 0;
        }
        if (taybac(x, y, danhdau))
        {
            // x -= 2;
            // y -= 1;
            // danhdau[x][y] = 1;
            matuan(x - 2, y - 1, danhdau, i + 1);
            danhdau[x - 2][y - 1] = 0;
        }
        if (bactay(x, y, danhdau))
        {
            // x -= 1;
            // y -= 2;
            // danhdau[x][y] = 1;
            matuan(x - 1, y - 2, danhdau, i + 1);
            danhdau[x - 1][y - 2] = 0;
        }
        if (bacdong(x, y, danhdau))
        {
            // x += 1;
            // y -= 2;
            // danhdau[x][y] = 1;
            matuan(x + 1, y - 2, danhdau, i + 1);
            danhdau[x + 1][y - 2] = 0;
        }

        danhdau[x][y] = 0;
        // timvet[0][i] = 0;
        // timvet[1][i] = 0;
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    int danhdau[8][8];
    // taomangdanhdau(danhdau);

    for (int i = 0; i < 8; i++)
    {
        /* code */
        for (int j = 0; j < 8; j++)
        {
            /* code */
            danhdau[i][j] = 0;
        }
    }
    // for (int i = 0; i < 8; i++)
    // {
    //     /* code */
    //     for (int j = 0; j < 8; j++)
    //     {
    //         /* code */
    //         cout << danhdau[i][j] << "  ";
    //     }
    //     cout << endl;
    // }
    matuan(3, 3, danhdau, 0);
    return 0;
}
