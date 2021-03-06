
#include "List.h"

//da nang hoa toan tu []
Nhan_Vien& List::operator[](const int i){
    if(i>=1||i<=n) 
        return list[i];
}
//ham khoi tao list co doi so truyen vao
List::List(int n){
    this->n = n;
    list = new Nhan_Vien[n];
}
//ham xoa
List::~List(){
    delete[] list;
}
//ham hien thi
void List::Show(){
    for(int i=0;i<this->n;i++){
        cout<<"nhan vien "<<i+1<<":"<<endl<<list[i];
    }
}

//ham nhap gia tri ban dau cho list
void List::Creat(){
    cout<<"khoi tao list"<<endl;
    for(int i=0;i<n;i++){
        cout<<"nhap nhan vien thu "<<i+1<<":"<<endl;
        cin>>list[i];cin.ignore();
    }
}
//ham them gia tri vao list tai vi tri bat ki(dau,cuoi,vi tri i)
void List::Insert(int i){
    Nhan_Vien *list1=new Nhan_Vien[n+1];
    Nhan_Vien *a=list;
    do{
        if((i<1)||(i>n+1)) cout<<"nhap lai vi tri: ";
    }while((i<1)||(i>n+1));
    for(int j=0;j<i-1;j++){
        list1[j]=list[j];
    }
    for(int j=i;j<n+1;j++){
        list1[j]=list[j-1];
    }
    cin>>list1[i-1];
    cin.ignore();
    list=list1;
    n++;
    delete[] a;
}
//ham xoa 1 phan tu cua list tai vi tri bat ki(dau,cuoi,vi tri i)
void List::Del(int i){
    Nhan_Vien *list1=new Nhan_Vien[n-1];
    Nhan_Vien *a=list;
    do{
        if((i<1)||(i>n)) cout<<"nhap lai vi tri: ";
    }while((i<1)||(i>n));
    for(int j=0;j<n;j++){
        if(j==i-1) continue;
        if(j<i-1) list1[j]=list[j];
        else list1[j-1]=list[j]; 
    }
    list=list1;
    n--;
    delete[] a;
}
//ham cap nhat tai 1 vi tri bat ki cua list(dau,cuoi,vi tri i)
void List::Update(int i){
    do{
        if((i<1)||(i>n)) cout<<"nhap lai vi tri: ";
    }while((i<1)||(i>n));
    Nhan_Vien a;
    cin>>a;
    list[i-1]=a;
}
//ham sap xep Shell sort
    //tang dan
bool Td(int a,int b){
    if(a>b) return true;
    return false;
}
    //giam dan
bool Gd(int a,int b){
    if(a<b) return true;
    return false;
}

void List::Shell_sort(bool(*q)(int,int)){
    int i,j;
    Nhan_Vien valueToInSert;
    int khoang_cach=1;
    while(khoang_cach<=n/3){
        khoang_cach=khoang_cach*3 +1;
    }
    while(khoang_cach>0){
        for(i=khoang_cach;i<n;i++){
            valueToInSert=list[i];
            j=i;
            while(j>=khoang_cach && q(list[j-khoang_cach].GetMNV(),valueToInSert.GetMNV())){
                list[j]=list[j-khoang_cach];
                j-=khoang_cach;
            }
            list[j]=valueToInSert;
        }
        khoang_cach=(khoang_cach-1)/3;
    }
}
//ham tim kiem Binary Search
Nhan_Vien* List::BinarySearch(){
    Nhan_Vien* list1=new Nhan_Vien[10];
    int left=0,right=n-1,mid,i, count=0;
    int lg;
    cout<<"nhap tien luong de tim kiem:"; cin>>lg;cout<<endl;
    while(left<=right){
        mid=(left+right)/2;
        if(lg>list[mid].GetMNV()){
            left=mid+1;
        }
        else if(lg<list[mid].GetMNV()){
            right=mid-1;
        }
        else{
            list1[count++]=list[mid];
            for(i=mid-1;i>=0;i--) if(lg==list[i].GetMNV()){
                list1[count++]=list[i];
            }
            for(i=mid+1;i<n;i++) if(lg==list[i].GetMNV()){
                list1[count++]=list[i];
            }
            break;
        }
    }
    if(count){
        cout<<"danh sach tim dc:";
        for(int i=0;i<count;i++){
            cout<<"nhan vien thu "<<i+1<<": "<<endl<<list1[i]<<endl;
        } 
        return list1;
    }
    else{
        cout<<"khong tim thay!!!"<<endl;
        return NULL;
    }
}