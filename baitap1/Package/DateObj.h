
#if !defined(DATEOBJ)
#define DATEOBJ

#include<iostream>
#include<string>
using namespace std;

class DateOjd{
    private:
        int day,month,year;
    public:
        DateOjd();
        DateOjd(int ngay=1,int thang=1,int nam=1);
        ~DateOjd();
        friend istream &operator >> (istream &in, DateOjd &v);
        friend ostream &operator << (ostream &out,const DateOjd &v);
};


#endif // DATEOBJ
