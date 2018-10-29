#if !defined(LISTOBJECT)
#define LISTOBJECT


#include<iostream>
#include<string>
// #include "PersonClass.cpp"

using namespace std;


template<typename T>
class ListObject
{
private:
    int m_n,m_top;
    T *m_data;
public:
    ListObject(const T&); // truyen mot mang vao 
    ListObject(int n, T ); // n phan tu bang gia tri T
    ListObject(int n=0); // n phan tu bang 0
    ~ListObject();
    //method setting
    void mallocListObject(); //cap phat dong
    T &index(int i) const;
    //size
    int size();
    void push_back(const T &);
    T *l_begin() const;
    T *l_end() const;
    void clear();
    T *data();
    T pop_back();
    void showList();
    void l_insert(const T &,int k = 0);
    void l_delete(int k=-1);
    void l_update(int k);
    //operator

    T &operator [](int i) const;

    //sort
    void shell_sort();

    //search
    int l_search(string x,int l=0, int r=-1);

};

#endif // LISTOBJECT
