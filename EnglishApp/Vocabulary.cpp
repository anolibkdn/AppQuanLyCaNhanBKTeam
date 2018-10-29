
#if !defined(VOCABULARY)
#define VOCABULARY

#include<iostream>
#include<string>
#include "EnglishWord.cpp"


using namespace std;


class Vocabulary
{
private:
    int lengh_preposition;
    EnglishWord _vocabulary;
    EnglishWord *_prepositon;

public:
    Vocabulary(EnglishWord vocabuly, EnglishWord preposition[]);
    Vocabulary(string,string,string);
    Vocabulary();

    //get method
    EnglishWord get_Vocabulary();
    EnglishWord *get_Preposition() const;

    //define operator
    // EnglishWord &operator [](int i) const;
    friend istream &operator >> (istream &in, Vocabulary &vocabulary);
    friend ostream &operator >> (ostream &out,const Vocabulary &vocabulary);

    ~Vocabulary();
};

Vocabulary::Vocabulary(EnglishWord vocabulary, EnglishWord preposition[])
{
    this->lengh_preposition = sizeof(preposition);
    this->_vocabulary = vocabulary;
    this->_prepositon = new EnglishWord[this->lengh_preposition];
    
    for(int i = 0; i < this->lengh_preposition; i++)
    {
        this->_prepositon[i] = preposition[i];
    }
    
}

Vocabulary::Vocabulary(string word, string mean, string example):_vocabulary(word,mean,example){
    this->lengh_preposition = 0 ;
}


Vocabulary::Vocabulary(){
    this->lengh_preposition = 0;
}

// get method

EnglishWord Vocabulary::get_Vocabulary(){
    return this->_vocabulary;
}

EnglishWord *Vocabulary::get_Preposition() const{
    return this->_prepositon;
}

//============================ operator ===========================
istream &operator >> (istream &in, Vocabulary &vocabulary){
    cout<<"vocabulary: "<<endl;
    in>>vocabulary._vocabulary;

}

Vocabulary::~Vocabulary()
{
    if(this->_prepositon!=NULL){
        delete [] this->_prepositon;
    }
}


#endif // VOCABULARY
