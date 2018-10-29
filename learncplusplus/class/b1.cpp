#include<bits/stdc++.h>
#include "vectorcpp.h"


using namespace std;

int main(int argc, char const *argv[])
{
    vectorcpp  v1(2),v3;
    vectorcpp v2;
    cout<<v1.getN()<<endl;
    cout<<"v1: "<<endl;
    cin>>v1;
    cout<<v1<<endl;

    cout<<"v2: "<<endl;
    cin>>v2;
    cout<<v2<<endl;
    v3 = v1 + v2;
    cout<<v3<<endl;
    return 0;
}
