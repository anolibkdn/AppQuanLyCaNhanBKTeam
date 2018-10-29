#if !defined(PERSONCLASS)
#define PERSONCLASS

#include<iostream>
#include<string>

using namespace std;

/*
    Person  |  -> name    - getNameObject, setNameObject
            |  -> age     - getAgeObject, setAgeObject
            |  -> address - getAddressObject, setAddressObject
            |  -> sex     - getSexObject, setSexObject

            =
            => setAllDataObject()
            => toStringObject()
            => upDateObject()
            => operator >> , << 
            => inputDateHandle() -> toLower, isNumber, checkInputType

*/

class PersonClass
{
private:
    string m_namep;
    string m_addressp;
    int m_agep;
    bool m_sexp;

public:
    PersonClass(string name="", string address="", int age = 0, bool sex = false);

    ~PersonClass();
    //========================code get method here====================//
    string getNameObject();
    string getAddressObject();
    int getAgeObject();
    bool getSexObject();
    string getSort();
    string getSearch()const;

    //========================code set method here====================//

    void setNameObject(string);
    void setAddressObject(string);
    void setAgeObject(int);
    void setSexObject(bool);

    //======================== main method of obj=====================//
    void setAllDataObject(string , string , int , bool);
    void toStringObject();
    void upDateObject(string name= "",string address = "", int age = 0 ,bool sex = false);
    friend istream &operator >> (istream &in,PersonClass &P);
    friend ostream &operator << (ostream &out, const PersonClass &P);
    void inputDataHandle();
    void document();
};


#endif // PERSONCLASS
