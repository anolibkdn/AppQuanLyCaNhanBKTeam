
#include"DateOjd.h"

////////////////////////////////////////////////////////
//ham khoi tao co doi so
DateOjd::DateOjd(int ngay,int thang,int nam):day(ngay),month(thang),year(nam){

}

//ham check co phai so hay k
bool isNumber(string number){
    if(number.length() == 0) return false;
    for(int i = 0; i < number.length(); i++)
    {
        if(number[i] > '9' || number[i] < '0') return false;
    }return true;
    
}

//ham chuyen string ve so
int toIntNumber(string s){
    if(s.length()==0) return 0;
    int sum = 0,i=0;
    //123
    while(true)
    {
        sum += (s[i] - '0');
        if(i==(s.length()-1)) break;
        sum *= 10;
        i++; 
    }
    return sum;
}
//da nang hoa nhap du lieu
istream &operator >> (istream &in, DateOjd &v){
    string ngay, thang, nam;
    cout<<"nam: ";
    do{

        in>>nam;
        if(isNumber(nam)){
            v.year = toIntNumber(nam);
            break;
        }
        else cout<<"nhap lai nam: ";
    }while(1);
    cout<<"thang: ";
    do{
        in>>thang;
        if(isNumber(thang)){
            v.month = toIntNumber(thang);
            if(v.month<1 || v.month>12) cout<<"nhap lai thang: ";
            else break;
        }
        else cout<<"nhap lai thang: ";
        
    }while(1);
    cout<<"ngay: ";
    int st=31;
        switch(v.month){
            case 4:
            case 6:
            case 9:
            case 11:{st=30;
                    break;}
            case 2:
                {if((v.year%400==0)||(v.year%4==0&&v.year%100!=0)) st=29;
                else st=28;}
        }
    do{
        in>>ngay;
        if(isNumber(ngay)){
            v.day = toIntNumber(ngay);
            if(v.day>=1 && v.day<=st) break;
            else cout<<"nhap lai ngay: ";
        }
        else cout<<"nhap lai ngay: ";
    }while(1);
    return in;
}
//da nang hoa xuat du lieu
ostream &operator << (ostream &out,const DateOjd &v){
    out<<v.day<<"-"<<v.month<<"-"<<v.year<<endl;
    return out;
}
//ham khoi tao khong co doi so truyen vao
DateOjd::DateOjd(){
    this->day=1;
    this->month=1;
    this->year=2018;
}
//ham xoa
DateOjd::~DateOjd(){

}

/////////////////////////////////////////////////////////////