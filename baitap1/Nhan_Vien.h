#if !defined(NHAN_VIEN)
#define NHAN_VIEN
#include"DateOjd.h"
#include<iostream>
#include<string>
using namespace std;
class NhanVien{
    private:
        string Ma_nhan_vien, Ten_nhan_vien;
        DateOjd Ngay_nhan;
        bool Gioi_tinh;
        double Luong;
    public:
        NhanVien(string a="", string b="",bool c=true,double d=0.0, int ngay=1, int thang=1, int nam=1);
        ~NhanVien();
        int GetMNV();
        friend ostream &operator <<(ostream &out, const Nhan_Vien &a);
        friend istream &operator >>(istream &in, Nhan_Vien &a);
};

// //////////////////////////////////////////////////

// Nhan_Vien::Nhan_Vien(string a,string b,bool c,double d,int ngay,int thang,int nam):Ma_nhan_vien(a),Ten_nhan_vien(b),Gioi_tinh(c),Luong(d),Ngay_nhan(ngay,thang,nam){

// }


// Nhan_Vien::~Nhan_Vien(){
    
// }

// int Nhan_Vien::GetMNV(){
//     return Luong;
// }

// ostream &operator<<(ostream &out, const Nhan_Vien &a){
//     cout<<"ma nhan vien:";
//     out<<a.Ma_nhan_vien;
//     cout<<endl;
//     cout<<"ten nhan vien:";
//     out<<a.Ten_nhan_vien;
//     cout<<endl;
//     cout<<"ngay nhan:";
//     out<<a.Ngay_nhan;
//     cout<<endl;
//     cout<<"gioi tinh:";
//     out<<a.Gioi_tinh;
//     cout<<endl;
//     cout<<"luong:";
//     out<<a.Luong;
//     cout<<endl;
//     return out;
// }

// istream &operator>>(istream &in, Nhan_Vien &a){
//     string k;
//     cout<<"nhap ma nhan vien:";
//     do{
//         in>>a.Ma_nhan_vien;
//         cout<<endl;
//         if(a.Ma_nhan_vien.length()!=8) cout<<"nhap lai:";
//     }while(a.Ma_nhan_vien.length()!=8);
//     cout<<"nhap ten nhan vien:";
//     in>>a.Ten_nhan_vien;
//     cout<<endl;
//     cout<<"nhap ngay nhan:";
//     in>>a.Ngay_nhan;
//     cout<<endl;
//     cout<<"nhap gioi tinh:";
//     in>>k;
//     if(k=="0") a.Gioi_tinh=0;
//     else a.Gioi_tinh=1;
//     cout<<endl;
//     cout<<"nhap luong:";
//     in>>a.Luong;
//     cout<<endl;
//     return in;
// }

// ///////////////////////////////////////////////////////////////

#endif // NHAN_VIEN
