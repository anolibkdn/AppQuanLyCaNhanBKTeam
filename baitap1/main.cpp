#include<iostream>
#include<string>
#include"List.h"
#include "DateOjd.h"
#include "Nhan_Vien.h"
using namespace std;



int main(int argc, char const *argv[])
{
    List d1;
    d1.Creat();
    d1.Insert(1);
    d1.Del(1);
    d1.Update(1);
    //d1.Shell_sort(Td);
    d1.Show();
    return 0;
}
