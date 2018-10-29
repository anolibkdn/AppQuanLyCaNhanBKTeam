#include<iostream>

using namespace std;


struct vectorstructure
{
    /* data */
    float x,y,z;
};
/*
    creating a input sintax
*/
istream & operator >>(istream &in, vectorstructure &v){
    cout<<"x>>";
    in>>v.x;
    cout<<"y>>";
    in>>v.y;
    cout<<"z>>";
    in>>v.z;
    return in;
}

ostream & operator <<(ostream &out , const vectorstructure &v){
    out<<"("<<v.x<<","<<v.y<<","<<v.z<<")"<<endl;
    return out;
}

vectorstructure operator +(const vectorstructure& v1, const vectorstructure& v2){
    vectorstructure v3;
    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;
    v3.z = v1.z + v2.z;
    return v3;
}

vectorstructure operator -(const vectorstructure& v1, const vectorstructure& v2){
    vectorstructure v3;
    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;
    v3.z = v1.z + v2.z;
    return v3;
}

vectorstructure operator ++ (vectorstructure &v){
    // vectorstructure v1;
    v.x += 1;
    v.y += 1;
    v.z += 1;
    return v;
}

vectorstructure operator ++(vectorstructure &v,int){
    vectorstructure v1;
    v1 = v;
    v.x+=1;
    v.y+=1;
    v.z+=1;
    return v1;
}

int main(int argc, char const *argv[])
{
    /* code */
    vectorstructure v1,v2,v3,v4;
    cout<<"*****************Vector 3D Input Data: ********************"<<endl;
    cout<<"v1:"<<endl;
    cin>>v1;
    cout<<v1;
    cout<<"v2:"<<endl;
    cin>>v2;
    cout<<v2;
    cin>>v4;
    cout<<v4;
    v3 = v1 + v2 +v4;
    cout<<v3;
    v3 = v2 + v1++ + ++v1;
    cout<<v3<<endl;
    cout<<v1;
    return 0;
}

