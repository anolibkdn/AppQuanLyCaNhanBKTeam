#include<iostream>
#include<string>
#include "PersonClass.cpp"
#include "ListObject.cpp"


using namespace std;

int main(int argc, char const *argv[])
{
    PersonClass p1("nguyen van a");

    ListObject<PersonClass> l2(3);

    cout<<"nhap l2[0]: \n";
    cin>>l2[0];
    // cout<<l2.pop_back()<<endl;
    l2.showList();
    l2.l_insert(p1,l2.size());
    l2.showList();
    return 0;
}
