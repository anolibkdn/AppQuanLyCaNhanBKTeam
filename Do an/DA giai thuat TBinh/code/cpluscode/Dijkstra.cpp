#include <iostream>

using namespace std;
// cap phat dong bo nho

void capphatdong(int **v, int n)
{
    v = new int*[n];

    for (int i = 0; i < n; i++)
    {
        v[i] = new int[n];
    }
}

void khoitao(int *v, int danhdau[], int n)
{
    v[0] = 0;
    danhdau[0] = 1;

    for (int i = 1; i < n; i++)
    {
        v[i] = 936854775;
        danhdau[i] = 0;
    }
}

int minlist(int a[], int n, int danhdau[])
{
    int min = 99999;
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        /* code */
        if (danhdau[i] == 0 && a[i] < min)
        {
            min = a[i];
            index = i;
        }
    }
    return index;
}

bool check(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        /* code */
        if (a[i] == 0)
        {
            return true;
        }
    }
    return false;
}
void dijkstra(int v[][7], int vv[], int n, int danhdau[], int kq[])
{
    khoitao(vv, danhdau, n);
    int i = 0;
    while (check(danhdau, n))
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            // if(i==j && j==0) continue;
            if (v[i][j] != 0 && danhdau[j] == 0 && vv[i] + v[i][j] < vv[j])
            {
                vv[j] = vv[i] + v[i][j];
                kq[j] = i;
            }
        }
        i = minlist(vv, n,danhdau);
        danhdau[i] = 1; 
    }
    
    for(int i = 0; i < n; i++)
    {
        /* code */
        cout<<kq[i]<<"  ";
    }cout<<endl;
    

}

int main(int argc, char const *argv[])
{
    /* code */
    // int **v;
    int *vv;
    int n;
    // cout << "n>>>" << endl;
    // cin >> n;
    n = 7;
    vv = new int[n];
    /*
            n=7
            0 0 1 2 0 0 0
            0 0 2 0 0 0 3
            1 2 0 1 3 0 0
            2 1 0 0 0 0 1
            0 0 3 0 0 2 0
            0 3 0 0 2 0 1
            0 0 0 1 0 1 0 
        */
    int danhdau[n];
    int kq[n];
    // capphatdong(v,n);
    int v[7][7];
    for(int i = 0; i < n; i++)
    {
        /* code */
        
        for(int j = 0; j < n; j++)
        {
            /* code */
            cin>>v[i][j];
        }
        
    }
    for(int i = 0; i < n; i++)
    {
        /* code */
        
        for(int j = 0; j < n; j++)
        {
            /* code */
           cout<<v[i][j]<<"  ";
        }cout<<endl;
        
    }
    dijkstra(v,vv,n,danhdau,kq);
    return 0;
}
