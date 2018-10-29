
#if !defined(NHANVIEN)
#define NHANVIEN


#include<iostream>
#include<string>
#include"DateObj.h"

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
        friend ostream &operator <<(ostream &out, const NhanVien &a);
        friend istream &operator >>(istream &in, NhanVien &a);
};

#endif // NHANVIEN
