#include<bits/stdc++.h>


//===================================     define code     ===================================//

#define loopSyntaxDefinePlus(start, end) for(int i = start; i < end; i++)
#define loopSyntaxDefineSubstract(start, end) for(int i = start; i > end; i--)

//===================================   initilize class   ===================================//

//===================================    PEOPLE CLASS   =====================================//
//===================================    PEOPLE CLASS   =====================================//

using namespace std;


class People
{
private:
    string m_name; //string name: name of person
    int m_age; 
    string m_address;
    bool m_sex;
    static int numberOfPeople;

public:
    People(string m_name = "", int m_age = 0, string m_address = "", bool m_sex = false);
    // People(string name);
    ~People();
    // get method
    string GetName(){ return this->m_name; }
    int GetAge(){return this->m_age; }
    string GetAddress(){ return this->m_address; }
    bool GetSex(){ return this->m_sex; }
    void toStringObject();
    int countObjectCreate(){ return this->numberOfPeople; }
   
    //set method
    void SetName(string name);
    void SetAge(int age);
    void SetAddress(string address);
    void SetSex(bool sex);
    void SetAl(string name, int age, string address, bool sex);
    void UpdateData(string name="", int age  = 0, string address = "", bool sex = false);
    void enterData();

    //DA NANG HOA TOAN TU
    People &operator = (const People &v){
        if(this!=&v){
            m_name = v.m_name;
            m_address = v.m_address;
            m_age = v.m_age;
            m_sex = v.m_sex;
        }return *this;
    }
    
};

int People::numberOfPeople = 0;

People::People(string name, int age, string address, bool sex){
    this->m_name = name;
    this->m_age = age;
    this->m_address = address;
    this->m_sex = sex;
    this->numberOfPeople++;
}
// People::People(string name)
// { this->m_name = name; this->numberOfPeople++;}

People::~People(){}
//set method set up
void People::SetName(string name){ this->m_name = name; }
void People::SetAge(int age){ this->m_age = age; }
void People::SetAddress(string address){ this->m_address = address; }
void People::SetSex(bool sex){ this->m_sex = sex; }
void People::SetAl(string name, int age , string address, bool sex){ 
    this->m_name = name;
    this->m_age = age;
    this->m_address = address;
    this->m_sex = sex; 
}

void People::toStringObject(){
    cout<<"Name: '"<<m_name<<"', Age: '"<<m_age<<"', Address: '"<<m_address<<"', Sex: '"<<m_sex<<"'"<<endl;
}

void People::UpdateData(string name, int age, string address, bool sex){
    if(name!="") this->m_name = name;
    if(age!=0) this->m_age = age;
    if(address!="") this->m_address = address;
    if(sex!= this->m_sex) this->m_sex = sex;
}


void People::enterData(){
    cout<<"Name: "<<endl; getline(cin,m_name);
    if(m_name == ""){ cout<<"Error To Get Name!"<<endl;}
    cin.ignore();
    cout<<"Age: "<<endl; cin>>m_age;
    if(m_age == 0){ cout<<"Error To Get Age!"<<endl;}
    cin.ignore();
    cout<<"Address: "<<endl; getline(cin,m_address);
    if(m_address == ""){ cout<<"Error To Get Address!"<<endl;}
    cin.ignore();
    int tmp = 2;
    cout<<"Male: 1, Female: 0 "<<endl; cin>>tmp;
    if(tmp == 0){ m_sex = true; }
    else{ m_sex = false; }
    cin.ignore();
}
//===================================  LISTPEOPEL CLASS =====================================//
//===================================  LISTPEOPLE CLASS =====================================//


class ListPeople
{
private:
    /* data */
    int m_n;
    People *m_peopleList;
public:
    ListPeople(int n = 0);
    ~ListPeople();

    //method set
    void setListObject(int n);
    void mallocMemoryObjectList(int n);
    void showObjectArrayOfList();
    void addElementOjectPeopleinList();
    void copyObjectPeopleList(People *temp);
    void setObjectPeopleList();
    void updateObjectPeopleList(int index);
};

ListPeople::ListPeople(int n)
{
    m_peopleList = new People[n];
}

ListPeople::~ListPeople()
{
    delete []m_peopleList;
}
void ListPeople::setListObject(int n){
    m_n = n;
    m_peopleList = new People[n];
}

void ListPeople::setObjectPeopleList(){
    int i = 0;
    People p;
    try{     /* get name */
        
        while(i<m_n){
            p.enterData();
            m_peopleList[i] = p;
            i++;
        }
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
}

void ListPeople::copyObjectPeopleList(People *temp){
    temp = new People[m_n];
    loopSyntaxDefinePlus(0,m_n){
        temp[i] = m_peopleList[i];
    }
}

void ListPeople::mallocMemoryObjectList(int n){
    if(m_n!=0){
        delete [] m_peopleList;
    }
    m_n = n;
    m_peopleList = new People[n];
}

void ListPeople::showObjectArrayOfList(){
    loopSyntaxDefinePlus(0,m_n){
        m_peopleList[i].toStringObject();
    }
}

void ListPeople::addElementOjectPeopleinList(){
    People obj_people;
    int index;
    obj_people.enterData();
    cout<<"index: ";
    cin>>index;
    // people_c[n] = add_people;
    if(index < 0){
        //luu tam thoi du lieu cua list
        People *temp;
        this->copyObjectPeopleList(temp);
        //cap phat dong lai cho list
        ++m_n;
        this->mallocMemoryObjectList(m_n);
        //gan lai ket qua cho list
        loopSyntaxDefinePlus(0,m_n-1){
            m_peopleList[i] = temp[i];
        } 
        m_peopleList[m_n-1] = obj_people;
        delete [] temp;
    }else if(index == 0){
        People *temp;
        this->copyObjectPeopleList(temp);
        //cap phat dong lai cho list
        ++m_n;
        this->mallocMemoryObjectList(m_n);
        //gan lai ket qua cho list
        // loopSyntaxDefinePlus(1,m_n){
        //     m_peopleList[i] = temp[i-1];
        // } 
        m_peopleList[0] = obj_people;
        delete [] temp;
    }else{
        People *temp;
        this->copyObjectPeopleList(temp);
        //cap phat dong lai cho list
        ++m_n;
        this->mallocMemoryObjectList(m_n);
        //gan lai ket qua cho list
        loopSyntaxDefinePlus(0,m_n){
            if(i<index)
                m_peopleList[i] = temp[i];
            else if(i>index){
                m_peopleList[i] = temp[i-1];
            }
        } 
        m_peopleList[index] = obj_people;
        delete [] temp;
        
    }
}


void ListPeople::updateObjectPeopleList(int index){
    People tmp;
    tmp = m_peopleList[index];
    this->m_peopleList[index].toStringObject();
    this->m_peopleList[index].enterData();
    string name = m_peopleList[index].GetName().length() == 0? tmp.GetName() : m_peopleList[index].GetName();
    string address = m_peopleList[index].GetAddress().length() == 0? tmp.GetAddress() : m_peopleList[index].GetAddress();
    this->m_peopleList[index].SetName(name);
    this->m_peopleList[index].SetAddress(address);
}
//=================================== initilize functions ===================================//

//=====================================MAIN FUNCTION ==========================================//




int main(int argc, char const *argv[])
{

    ListPeople l;
    l.setListObject(1);
    l.setObjectPeopleList();
    l.showObjectArrayOfList();
    l.addElementOjectPeopleinList();
    l.updateObjectPeopleList(0);
    l.showObjectArrayOfList();
    return 0;
}

//====================================== END MAIN FUNCTION =====================================//
// cap phat dong
// void mallocMemoryObject(People *p, int n){
//     p = new People[n];
// }


// //set data
// //set data
// void setObjectArray(People *people_c, int n){
//     string name,address;
//     int age = 0, count = 0;
//     bool sex;
//     while(n--){  
//         if(setDataObject(name,age,address,sex)){
//             people_c[count++].SetAl(name,age,address,sex);
//         }else{
//             n++;
//         }
//     }
// }

// void showObjectArray(People *people_c, int n){
//     loopSyntaxDefinePlus(0,n){
//         people_c[i].toStringObject();
//     }
// }



// void updateObjectPeopleArray(People *people_c,int n){
//     int index;
//     cout<<"Index: "<<endl;
//     string name, address;
//     int age; bool sex;
//     people_c[index].toStringObject();
//     if(setDataObject(name,age,address,sex)){
//         people_c[index].UpdateData(name,age,address,sex);
//     }
// }

// void deleteElemetObjectArray(People *people_c, int &n, int index){
//     if(index < 0){
//         n--;
//     }else if(index == 0){
//         loopSyntaxDefinePlus(0,n-1){
//             people_c[i] = people_c[i+1];
//         }n--;
//     }else{
//         loopSyntaxDefinePlus(index,n-1){
//             people_c[i] = people_c[i+1];
//         }n--;
//     }
// }

// void searchForName(People *people_c, int n, string searchName){

// }

// void shellSortForName(People *people_c, int n){
//     int gap,i,j;
//     People temp;
//     for(gap=n/2;gap>0;gap=gap/2){

//         for(i=0;i<n;i=i+gap){

//             temp=people_c[i];

//             for(j=i;j>0 && people_c[j-gap].GetName()>temp.GetName();j=j-gap){
//                 people_c[j]=people_c[j-gap];
//             }

//             people_c[j]=temp;
//         }
//     }
// }