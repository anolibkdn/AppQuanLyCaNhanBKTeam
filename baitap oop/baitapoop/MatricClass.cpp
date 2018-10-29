#include<bits/stdc++.h>

#define singelloop(j,n) for(int i = j;i <n;i++)
#define nestedloop(n,m) for(int i = 0;i <n;i++) for(int j=0;j<m;j++)

using namespace std;


class MatricObj
{
private:
    int m_n, m_m;
    int **m_data;
public:
    MatricObj(int n, int m );
    MatricObj(const int **data);
    MatricObj(const MatricObj &m);

    ~MatricObj();
    //============get method===============
    int size();
    int size_row();
    int size_col();
    int **data() const{
        return m_data;
    }
    //============ set method =============

    void set_col(int m){this->m_m = m;}
    void set_row(int n){this->m_n = n;}
    void set_data();
};

void MatricObj::set_data(){
    if(m_n==0 && m_m==0){
        cout<<"row: ";
        cin>>this->m_n;
        cout<<"col: ";
        cin>>this->m_m;
    }
}

MatricObj::MatricObj(const MatricObj &m){
    this->m_n = m.m_n;
    this->m_m = m.m_m;
    nestedloop(m_n,m_m){
        this->m_data[i][j] = m.m_data[i][j];
    }
}

MatricObj::MatricObj(int n=0, int m=0)
{
    this->m_m = m;
    this->m_n = n;
    m_data = new int*[m_n];
    singelloop(0,m_n){
        m_data[i] = new int[m_m];
    }
    nestedloop(m_n,m_m){
        m_data[i][j] = 0;
    }
}

MatricObj::MatricObj(const int *data[]){
    this->m_m = sizeof(data[0]);
    this->m_n = sizeof(data)/this->m_m;
    m_data = new int*[m_n];
    singelloop(0,m_n){
        m_data[i] = new int[m_m];
    }
    nestedloop(m_n,m_m){
        m_data[i][j] = data[i][j];
    }
}

MatricObj::~MatricObj()
{
    if(m_data!=NULL){
        singelloop(0,m_n){
            delete [] m_data[i];
        }
        delete m_data;
    }
}

//----------- get method --------------
int MatricObj::size(){
    return m_m*m_n;
}

int MatricObj::size_row(){
    return this->m_n;
}

int MatricObj::size_col(){
    return this->m_m;
}

int main(int argc, char const *argv[])
{
    // MatricObj m(a);
    // cout<<m.size_col()<<endl;
    return 0;
}
