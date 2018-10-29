#include "PersonClass.h"

/*
*
*
*
*
*
*
*
*/



//======================contruction and destruction==================//
PersonClass::PersonClass(string name, string address, int age, bool sex){
    this->m_namep = name;
    this->m_addressp = address;
    this->m_agep = age;
    this->m_sexp = sex;
}

PersonClass::~PersonClass(){/*do something here*/}


//========================== set method of class====================//
//GET METHOD
string PersonClass::getSearch() const { return this->m_namep; }
string PersonClass::getSort(){ return this->m_namep; }
string PersonClass::getNameObject(){ return this->m_namep; }
string PersonClass::getAddressObject(){ return this->m_addressp; }
int PersonClass::getAgeObject(){ return this->m_agep; }
bool PersonClass::getSexObject(){ return this->m_sexp; }


//SET METHOD
void PersonClass::setNameObject(string name){ this->m_namep = name; }
void PersonClass::setAddressObject(string address){ this->m_addressp = address; }
void PersonClass::setAgeObject(int age){ this->m_agep = age; }
void PersonClass::setSexObject(bool sex){ this->m_sexp = sex; }

//OTHER SETTING METHOD
//set all data
void PersonClass::setAllDataObject(string name, string address, int age, bool sex){
    this->m_namep = name;
    this->m_addressp = address;
    this->m_agep = age;
    this->m_sexp = sex;
}
//update data
void PersonClass::upDateObject(string name, string address, int age, bool sex){
    if(name.length() != 0){    this->m_namep = name;    }
    if(address.length()!=0){    this->m_addressp = address;    }
    if(age != 0 ){     this->m_agep = age;      }
    if(m_sexp!=sex){    this->m_sexp = sex;     }
}

void PersonClass::toStringObject(){
    cout<<"======================================================================================="<<endl;
    cout<<"Name: "<<m_namep<<endl<<"Address: "<<m_addressp<<endl<<"Age: "<<m_agep<<endl<<"Sex: "<<m_sexp<<endl;
    cout<<"======================================================================================="<<endl;
}

//input data friend 
istream &operator >> (istream &in , PersonClass & P){
    // cout<<"======================================================================================="<<endl;
    cout<<"=================================    INPUT    DATA     ================================"<<endl;
    // cout<<"======================================================================================="<<endl;
    string sex;
    cout<<"Name : ";                                            getline( in,P.m_namep );
    cout<<"Address : ";                                         getline( in, P.m_addressp);
    cout<<"Age ( Integer > 0 ): ";                              in>>P.m_agep; in.ignore();
    cout<<"Sex ( Integer 0 = male; 1 = Female ): ";             getline(cin,sex);
    if(sex=="true" || sex == "1"){
        P.m_sexp = true;
    }else{
        P.m_sexp = false;
    }
    return in;
}

ostream &operator << (ostream &out,const PersonClass &P){
    out<<"{ Name: "<<P.m_namep<<",Address: "<<P.m_addressp<<",Age: "<<P.m_agep<<",Sex: "<<P.m_sexp<<" }"<<endl;
    return out;
}

//handle string
//check a string is full number in it
bool isNumber(string number){
    if(number.length() == 0) return false;
    for(int i = 0; i < number.length(); i++)
    {
        if(number[i] > '9' || number[i] < '0') return false;
    }return true;
    
}
// transfor string in lower string
string toLowerCase(string s){
    string temp = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <='Z') s[i] += ' ';
        temp += s[i];
    }return temp;
    
}
// input and return a string of type
string checkInputType(int type){
    //type = 0: string, 1 : numnber, 2: boolen
    string data="";
    string out[] = {"string: ","number: ","boolen: "};
    while(true){
        cout<<out[type];
        getline(cin, data);
        if(data.length()==0) break;
        if(type==0) break;
        if((type==1 || type == 2) && isNumber(data)) break;
    }
    return data;
}
//convert a string to int type
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
//handle data
void PersonClass::inputDataHandle(){
    cout<<"Name\n";                                     
    m_namep = toLowerCase(checkInputType(0));
    cout<<"Address\n";                                  
    m_addressp = toLowerCase(checkInputType(0));
    cout<<"Age ( Integer > 0 )\n";                      
    m_agep = toIntNumber(checkInputType(1));
    cout<<"Sex ( Integer 0 = male; 1 = Female )\n";     
    m_sexp = toIntNumber(checkInputType(2))==0?false:true;
}

void PersonClass::document(){
    string doc = "tutorial:\n -Property: string name;   string address;   int age;   bool sex;\n";
    string doc1 = "tutorial:\n -Method: toStringObject() ,inputDataHandle(), upDateObject(),\
     setAllDataObject(), get,set propety\n";
    cout<<doc<<doc1;
}

/*
===========================================================================
*/