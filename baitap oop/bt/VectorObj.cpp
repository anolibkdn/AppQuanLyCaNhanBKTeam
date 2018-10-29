#include<bits/stdc++.h>

#define LoopIncrease(j,n) for(int i = j;i < n;i++)



// ============================================ PROGRAM ==============================================//
// ============================================ PROGRAM ==============================================//


using namespace std;

class VectorObj
{
private:
    int m_n;
    int *m_data;
public:
    
    VectorObj(int *);
    VectorObj(int n = 0);
    VectorObj(const VectorObj &);
    ~VectorObj();
    //nhap xuat
    friend istream &operator >> (istream &in, VectorObj &v);
    friend ostream &operator << (ostream &out,const VectorObj &v);

    //cong tru nhan bang
    VectorObj operator + (const VectorObj &v);
    VectorObj operator - (const VectorObj &v);
    VectorObj operator * (const VectorObj &v);
    VectorObj &operator = (const VectorObj &v);
    int &operator [] (int i) const;
    int operator () (int x) const;

    //xuat du lieu
    int size(){ return m_n; }
    int *dataof() const{ return m_data; }

    //set du lieu
    void SetDate(int *data, int n);
};

// ============================================ PROGRAM ==============================================//

VectorObj::VectorObj(const VectorObj &v){
    if(this!=&v){
        this->m_n = v.m_n;
        this->m_data = new int[this->m_n];
        LoopIncrease(0,this->m_n){
            (*this)[i] = v[i];
        }
    }
}

VectorObj::VectorObj(int n)
{
    this->m_n  = n;
    m_data = new int[n];
    LoopIncrease(0,n){
        m_data[i] = 0;
    }
}

VectorObj::VectorObj(int *data){
    // cout<<sizeof(data)<<endl;
    this->m_n = sizeof(data);
    this->m_data = new int[this->m_n];
    
    LoopIncrease(0,m_n){
        m_data[i] = data[i];
    }
    
}


void VectorObj::SetDate(int *data, int n){ 
    if(m_n!=n){
        this ->m_n = n;
        m_data = new int [n];
    }
    LoopIncrease(0,n){
        (*this)[i] = data[i];
    }
}

int VectorObj::operator() (int x) const{
    if(x < this->m_n){
        return this->m_data[x];
    }
}

int &VectorObj::operator [] (int i) const{
    if(i < this->m_n){
        return this->m_data[i];
    }
}

istream &operator >> (istream &in, VectorObj &v){
    if(v.m_n == 0){
        cout<<"n = ";
        in>>v.m_n;
        v.m_data = new int[v.m_n];
    }
    LoopIncrease(0,v.m_n){
        cout<<"Vector["<<i<<"] = ";
        in>>v[i];
    }return in;

}

ostream &operator << (ostream &out,const VectorObj &v){
    out<<"[ ";
    LoopIncrease(0,v.m_n){
        out<<v[i]<<" ";
    }out<<"]";
    return out;
}

VectorObj VectorObj::operator+(const VectorObj &v){
    
    try
    {
        if(this->m_n == v.m_n){
            VectorObj tmp(this->m_n);
            LoopIncrease(0,this->m_n){
                tmp[i] = v[i] + (*this)[i];
            }
            return tmp;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    VectorObj nullvetor;
    return nullvetor;
}

VectorObj VectorObj::operator - (const VectorObj &v){
    
    try
    {
        if(this->m_n == v.m_n){
            VectorObj tmp(this->m_n);
            LoopIncrease(0,this->m_n){
                tmp[i] = v[i] - (*this)[i];
            }
            return tmp;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

VectorObj VectorObj::operator * (const VectorObj &v){
    
    try
    {
        if(this->m_n == v.m_n){
            VectorObj tmp(this->m_n);
            LoopIncrease(0,this->m_n){
                tmp[i] = v[i] * (*this)[i];
            }
            return tmp;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

VectorObj::~VectorObj()
{
    if(m_data!=NULL) delete [] m_data;
}

VectorObj &VectorObj::operator = (const VectorObj &v){
    if(this!=&v){
        if(this->m_n!= v.m_n){
            delete [] this->m_data;
            this->m_n = v.m_n;
            this->m_data = new int [this->m_n];
        }
        LoopIncrease(0,v.m_n){
            (*this)[i] = v[i];
        }
    }return *this;
}

// ============================================   MAIN  ==============================================//
// ============================================   MAIN  ==============================================//

int main(int argc, char const *argv[])
{
    int a[] = {2,3,4,5,6,7,8,89};
    VectorObj v1(a);
    // cout<<sizeof(a)<<endl;
    // cout<<v1.size();
    cout<<v1<<endl;

    return 0;
}

// ============================================ END PROGRAM ===========================================//