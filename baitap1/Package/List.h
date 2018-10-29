
#if !defined(LIST)
#define LIST

#include<iostream>
#include<string>
#include"NhanVien.h"
#include"DateObj.h"
using namespace std;

class List{
    private:
        int n;
        NhanVien *list;
    public:
        List(int n=1);
        ~List();
        // friend Nhan_Vien &operator[](int);
        void Creat();
        void Insert(int);
        void Del(int);
        void Update(int);
        void Shell_sort(bool(*q)(int,int));
        NhanVien* BinarySearch();
        void Show();
        friend bool Td(int,int);
        friend bool Gd(int,int);
        NhanVien &operator[](const int i);
    
};

#endif // LIST
