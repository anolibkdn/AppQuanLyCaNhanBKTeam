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
    MatricObj(int **data);

    ~MatricObj();
    //============get method===============
    int size();
    int size_row();
    int size_col();

    //============operator=================

    /*cin*/friend istream &operator >> (istream &in, MatricObj &m);
    /*cout*/friend ostream &operator << (ostream &out,const MatricObj &m);
    /*+*/ MatricObj operator + (const MatricObj &m);
    /*-*/ MatricObj operator - (const MatricObj &m);
    /***/ MatricObj operator * (const MatricObj &m);
    /*=*/ MatricObj &operator = (const MatricObj &m);
    /***/ MatricObj operator * (const int &n);

    // /**/ MatricObj operator - (const int &n);

    //=======================================
    MatricObj T();
};


/*=====================constructor===================*/
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

MatricObj::MatricObj(int **data){
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


/*====================operator===================*/

istream &operator >>(istream &in, MatricObj &m){
    if(m.m_n ==0 && m.m_m==0){
        cout<<"row: ";
        in>>m.m_n;
        cout<<"col: ";
        in>>m.m_m;
        m.m_data = new int*[m.m_n];
        singelloop(0,m.m_n){
            m.m_data[i] = new int[m.m_m];
        }
    }
    nestedloop(m.m_n,m.m_m){
        cout<<"elememt["<<i<<j<<"] = ";
        in>>m.m_data[i][j];
    }
    return in;
}

ostream &operator << (ostream &out, const MatricObj &m){
    nestedloop(m.m_n,m.m_m){
        out<<m.m_data[i][j]<<"  ";
        if(j==m.m_m-1) out<<endl;
    }
    return out;
}

MatricObj MatricObj::operator + (const MatricObj &m){
    
    try
    {

        if((this->m_n == m.m_n) && (this->m_m = m.m_m)){
            MatricObj tmp(m.m_n,m.m_m);
            nestedloop(m.m_n,m.m_m){
                tmp.m_data[i][j] = this->m_data[i][j] + m.m_data[i][j];
            }
            return tmp;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

MatricObj MatricObj::operator - (const MatricObj &m){
    
    try
    {

        if((this->m_n == m.m_n) && (this->m_m = m.m_m)){
            MatricObj tmp(m.m_n,m.m_m);
            nestedloop(m.m_n,m.m_m){
                tmp.m_data[i][j] = this->m_data[i][j] - m.m_data[i][j];
            }
            return tmp;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

MatricObj MatricObj::operator * (const int &n){
    
    try
    {
        MatricObj tmp(this->m_n, this->m_m);
        nestedloop(this->m_n, this->m_m){
            tmp.m_data[i][j] = this->m_data[i][j] * n;
        }
        return tmp;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

MatricObj MatricObj::operator * (const MatricObj &m){
    
    try
    {
        if(this->m_m == this->m_n){
            MatricObj tmp(this->m_n, m.m_m);
            
            for(int i = 0; i < this->m_n; i++)
            {
                
                for(int j = 0; j < m.m_m; j++)
                {
                    
                    for(int k = 0; k < this->m_m; k++)
                    {
                        tmp.m_data[i][j] += this->m_data[i][k] * m.m_data[k][j];
                    }
                    
                }
                
            }
            
            return tmp;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

MatricObj &MatricObj::operator=(const MatricObj &m){
    if(this!=&m){
        delete [] this->m_data;
        this->m_n = m.m_n;
        this->m_m = m.m_m;

        nestedloop(m.m_n,m.m_m){
            this->m_data[i][j] = m.m_data[i][j];
        }
        return *this;
    }
}

//================ bien doi ma tran==================

MatricObj MatricObj::T(){
    MatricObj tmp(this->m_m, this->m_n);

    nestedloop(this->m_n, this->m_m){
        tmp.m_data[j][i] = this->m_data[i][j];
    }
    return tmp;
}

int main(int argc, char const *argv[])
{
    int a[2][2] = {{1,2},{3,4}};
    
    // MatricObj m(a);
    // cout<<m.size_col()<<endl;
    return 0;
}
