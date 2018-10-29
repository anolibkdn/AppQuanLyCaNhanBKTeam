
#if !defined(VECTORCPP)
#define VECTORCPP

#include<bits/stdc++.h>

using namespace std;

#define loop(n) for(int i = 0; i < n; i++)


class vectorcpp
{
private:
    int m_n;
    double *m_v;
public:
    vectorcpp(/* args */);
    vectorcpp(int);
    vectorcpp(int,double*);
    vectorcpp(const vectorcpp &);
    double *getVector();
    int getN();
    friend istream & operator >> (istream &in, vectorcpp &v);
    friend ostream & operator << (ostream &out , const vectorcpp &v);
    vectorcpp operator + (const vectorcpp &v);
    ~vectorcpp();
};

double * vectorcpp::getVector(){return m_v;}
int vectorcpp::getN(){return m_n;}
vectorcpp::vectorcpp(/* args */){ this->m_n = 0; this->m_v = NULL; }

vectorcpp::~vectorcpp(){ if(m_v!=NULL) delete m_v; }
vectorcpp::vectorcpp(const vectorcpp &v){
    this->m_n = v.m_n;
    this->m_v = new double[this->m_n];
    loop(this->m_n){
        this->m_v[i] = v;
    }
}
vectorcpp::vectorcpp(int n){
    this->m_n = n;
    this->m_v = new double[this->m_n];
}

vectorcpp vectorcpp::operator+(const vectorcpp &v){
    
    if(this->m_n > v.m_n){
        vectorcpp tmp(*this);    
        loop(v.m_n){
            tmp.m_v[i] += v.m_v[i];
        }return tmp;
    }else{
        vectorcpp tmp(v);
        loop(this->m_n){
            tmp.m_v[i] += this->m_v[i];
        }return tmp;
    }
}

istream &operator >> (istream &in, vectorcpp &v){
    cout<<"n >>"<<endl;
    in>>v.m_n;
    v.m_v = new double[v.m_n];
    loop(v.m_n){
        cout<<"v["<<i<<"] >> "<<endl;
        cin>>v.m_v[i];
    }
    return in;
}

ostream &operator << (ostream &out, const vectorcpp &v){
    out<<"[";
    loop(v.m_n){
        if(i<v.m_n-1)
            out<<v.m_v[i]<<", ";
        else out<<v.m_v[i];
    }out<<"]";
return out;
}
vectorcpp::vectorcpp(int n, double *v){
    this->m_n = n;
    m_v = new double[m_n];
    loop(m_n){
        m_v[i] = v[i];
    }
}
#endif // VECTORCPP
