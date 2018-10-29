#include<bits/stdc++.h>
#include"PersonClass.cpp"
using namespace std;



class ListPerson
{
private:
    int m_n;
    PersonClass *p;
public:
    ListPerson(int n = 0 );
    ~ListPerson();
    void mallocMemory();
};

ListPerson::ListPerson(int n)
{
    m_n = n;
    mallocMemory();
}

ListPerson::~ListPerson()
{
}
