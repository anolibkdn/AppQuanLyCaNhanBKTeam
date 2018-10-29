//  THUAT TOAN DIJKSTRA TIM DUONG DI NGAN NHAT//

//*******************************************************//
//                        START
//*******************************************************//


#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

const string road[20] = {"A","B","C","D","E","F","G","H","I","K","L","M","N"};

void readFile(ifstream &isfile, int data[][20], int &n);
void showDate(int data[][20], int n);
void init(int *run, int *tick, int *results, int n);
int indexMin(int *a, int *tick, int n);
void dijkstraProgram(int data[][20], int *tick, int *run, int *results, int n, int head, int tail);
bool Stop(int *a, int n);

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    ifstream isfile;         //khai bao con tro file
    isfile.open("test.txt"); //mo file can doc
    int data[20][20];
    readFile(isfile, data, n);
    int tick[n];
    int run[n];
    int results[n];
    int head, tail;
    showDate(data,n);
    cin >> head >> tail;
    dijkstraProgram(data,tick,run,results,n,head,tail);
    return 0;
}

void readFile(ifstream &isfile, int data[][20], int &n)
{
    isfile >> n;
    // cout<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */

        for (int j = 0; j < n; j++)
        {
            /* code */
            isfile >> data[i][j];
        }
    }

    isfile.close();
    return;
}
void showDate(int data[][20], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */

        for (int j = 0; j < n; j++)
        {
            /* code */
            cout << data[i][j] << "  ";
        }
        cout << endl;
    }
    return;
}

void init(int *run, int *tick, int *results, int n, int head, int tail)
{
    run[head] = 0;
    tick[head] = 1;
    results[head] = 0;
    for (int j = 0; j < n; j++)
    {
        /* code */
        if (j != head)
        {
            run[j] = INT_MAX;
            tick[j] = 0;
            results[j] = 0;
        }
    }
    return;
}

int indexMin(int *a, int *tick, int n)
{
    int min = INT_MAX;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (tick[i] == 0 && min > a[i])
        {
            min = a[i];
            index = i;
        }
    }
    return index;
}

void dijkstraProgram(int data[][20], int *tick, int *run, int *results, int n, int head, int tail)
{
    int i = head;
    int count = n;
    init(run, tick, results, n, head, tail);
    while (Stop(tick,n))
    {

        for (int j = 0; j < count; j++)
        {
            if (data[i][j] != 0 && tick[j] == 0 && (run[i] + data[i][j] < run[j]))
            {
                run[j] = run[i] + data[i][j];
                results[j] = i;
                // cout<<i<<endl;
            }
        }
        i = indexMin(run, tick, n);
        tick[i] = 1;
    }
    // in thu results
    
    int k = tail;
    while(k!=head){
        /* code */
        cout<<road[k]<<" <- ";
        k = results[k];
        if(k==head){
            cout<<road[k];
        }
    }cout<<endl;
    
    
    return;
}

bool Stop(int *a,int n){
    
    for(int i = 0; i < n; i++){
        if(a[i]==0) return true;
    }return false;   
}