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
    //operator

    T &operator [](int i) const;

    //sort
    void shell_sort();

    //search
    int l_search(string x,int l=0, int r=-1);

};


template<typename T>
ListObject<T>::ListObject(const T &l){
    this->m_n = sizeof(l)/sizeof(T);
    m_data = new T[m_n];
    
    for(int i = 0; i < m_n; i++)
    {
        m_data[i] = l[i];
    }
    this->m_top = this->m_n - 1;
}
template<typename T>
ListObject<T>::~ListObject(){ delete [] m_data;}


template<typename T>
void ListObject<T>::mallocListObject(){
    if(m_data!=NULL) delete [] m_data;
    this->m_data = new T[m_n];
}

template<typename T>
int ListObject<T>::size(){
    return m_n;
}

template<typename T>
ListObject<T>::ListObject(int n, T l){
    m_n = n;
    m_data = new T[m_n];// cap phat dong cho data
    for(int i = 0; i < n; i++)
    {
        m_data[i] = l;
    } 
    this->m_top = this->m_n - 1;
}

template<typename T>
ListObject<T>::ListObject(int n){
    m_n = n;
    m_data = new T[m_n];// cap phat dong cho data
    this->m_top = 0;
}

template<typename T>
T &ListObject<T>::index(int i) const{
    return m_data[i];
}

template<typename T>
T &ListObject<T>::operator[](int i) const{
    if(i>=0 && i < m_n)
        return m_data[i];
}

template<typename T>
void ListObject<T>::push_back(const T &p){

    if(m_top < m_n ){
        m_data[m_top] = p;
        m_top++;
    }else{
        //tao mot bien tam
        T *temp;
        temp = new T[m_n];
        
        for(int i = 0; i < m_n; i++)
        {
            temp[i] = m_data[i];
        }
        //cap phat lai bo nho cho data
        ++m_n;
        mallocListObject();
        //gan du lieu tro lai data
        for(int i = 0; i < m_n-1; i++)
        {
            m_data[i] = temp[i];
        }
        // push back
        m_data[m_n-1] = p;
        //tang top
        m_top++;
        //delete temp
        delete [] temp;
    }
    
}

template<typename T>
T *ListObject<T>::l_begin() const{
    return &m_data[0];
}

template<typename T>
T *ListObject<T>::l_end() const{
    return &m_data[m_n-1];
}

template<typename T>
void ListObject<T>::clear(){
    m_n = 0;
    delete [] m_data;
}

template<typename T>
T *ListObject<T>::data(){
    return m_data;
}

template<typename T>
T ListObject<T>::pop_back(){
    //tao mot bien tam
    T *temp;
    temp = new T[m_n];
    
    for(int i = 0; i < m_n; i++)
    {
        temp[i] = m_data[i];
    }
    //cap phat lai bo nho cho data
    --m_n;
    mallocListObject();
    //gan du lieu tro lai data
    for(int i = 0; i < m_n; i++)
    {
        m_data[i] = temp[i];
    }
    // push back
    T tmp;
    tmp = temp[m_n];
    delete [] temp;
    return tmp;
    
}
template<typename T>
void ListObject<T>::shell_sort() {    
    int  i;  
    int  j;  
    T  temp;  
    int  gap =  1 ;  
    int  len = m_n;  
    while  (gap < len/3 ) {gap = gap*3  +  1 ;}  
    for  (; gap>  0 ; gap /=  3 ) {  
        for  (i = gap; i <len; i ++) {  
            temp = m_data [i];  
            for  (j = i - gap; j >=  0  && m_data[j].getSort() > temp.getSort(); j -= gap) {  
                m_data [j + gap] = m_data [j];  
            }  
            m_data [j + gap] = temp;  
        }  
    }  
}  

template<typename T>
void ListObject<T>::showList(){
    
    for(int i = 0; i < m_n; i++)
    {
        cout<<m_data[i];
    }
    
}

template<typename T>
void ListObject<T>::l_insert(const T &m, int k){
    
    if(k <= this->m_n && k >=0){
        T *tmp;
        tmp = new T[this->m_n];
        for(int i = 0; i < m_n; i++){
            tmp[i] = m_data[i];
        }
        m_n++;
        mallocListObject();
        (*this)[k] = m;
        
        for(int i = 0; i < this->m_n; i++)
        {
            if(i<k){
                (*this)[i] = tmp[i];
            }else if(i>k){
                (*this)[i] = tmp[i-1];
            }
        }
        if(this->m_top < k) this->m_top = k;
    }else{
        cout<<"error insert!"<<endl;
    }
    
}

template<typename T>
void ListObject<T>::l_delete(int k){
    
    if(k <= this->m_n  && k !=-1  && k >=0){
        T *tmp;
        tmp = new T[this->m_n];
        for(int i = 0; i < m_n; i++){
            tmp[i] = m_data[i];
        }
        m_n--;
        mallocListObject();
        
        for(int i = 0; i < m_n+1; i++)
        {
            if(i<k){
                m_data[i] = tmp[i];
            }else if(i>k){
                m_data[i-1] = tmp[i];
            }
        }
        
        if(m_top>=k) m_top--;
    }else if(k==-1){
        cout<<"\nnothing was deleted!"<<endl;
    }else{
        cout<<"error delete!"<<endl;
    }
    
}

template<typename T>
int ListObject<T>::l_search( string x, int l, int r){
    this->shell_sort();
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (this->m_data[mid].getSearch() == x)
            return mid;
        if (this->m_data[mid].getSearch() > x)
            return l_search(x,l, mid - 1);
        else return l_search(x,mid + 1, r);
    }
 
  // Nếu không tìm thấy
    return -1;
}