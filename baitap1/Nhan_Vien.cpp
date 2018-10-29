
#include"Nhan_Vien.h"
//////////////////////////////////////////////////
//ham khoi tao co doi so truyen vao
Nhan_Vien::Nhan_Vien(string a,string b,bool c,double d,int ngay,int thang,int nam):Ma_nhan_vien(a),Ten_nhan_vien(b),Gioi_tinh(c),Luong(d),Ngay_nhan(ngay,thang,nam){

}

//ham xoa
Nhan_Vien::~Nhan_Vien(){
    
}
//ham lay gia tri thuoc tinh luong
int Nhan_Vien::GetMNV(){
    return Luong;
}
//da nang hoa xuat du lieu
ostream &operator<<(ostream &out, const Nhan_Vien &a){
    cout<<"ma nhan vien:";
    out<<a.Ma_nhan_vien;
    cout<<endl;
    cout<<"ten nhan vien:";
    out<<a.Ten_nhan_vien;
    cout<<endl;
    cout<<"ngay nhan:";
    out<<a.Ngay_nhan;
    cout<<endl;
    cout<<"gioi tinh:";
    out<<a.Gioi_tinh;
    cout<<endl;
    cout<<"luong:";
    out<<a.Luong;
    cout<<endl;
    return out;
}
//da nang hoa nhap du lieu
istream &operator>>(istream &in, Nhan_Vien &a){
    string k;
    cout<<"nhap ma nhan vien:";
    do{
        in>>a.Ma_nhan_vien;
        cout<<endl;
        if(a.Ma_nhan_vien.length()!=8) cout<<"nhap lai:";
    }while(a.Ma_nhan_vien.length()!=8);
    cout<<"nhap ten nhan vien:";
    in>>a.Ten_nhan_vien;
    cout<<endl;
    cout<<"nhap ngay nhan:";
    in>>a.Ngay_nhan;
    cout<<endl;
    cout<<"nhap gioi tinh:";
    in>>k;
    if(k=="0") a.Gioi_tinh=0;
    else a.Gioi_tinh=1;
    cout<<endl;
    cout<<"nhap luong:";
    in>>a.Luong;
    cout<<endl;
    return in;
}

///////////////////////////////////////////////////////////////