
#if !defined(ENGLISHWORD)
#define ENGLISHWORD

#include<iostream>
#include<string>

using namespace std;



class EnglishWord
{
private:
    /* data */
    string _word,_mean,_example;
public:
    
    //contructor method
    EnglishWord(string word="",string mean="", string example="");
    //destructor method
    ~EnglishWord();

    //set other method
    
    string getWord();
    string getMean();
    string getExample();
    //set method
    void update_English(string word="", string mean ="", string example ="");
    void set_English(string,string,string);

    //input stream

    friend istream &operator >> (istream &in, EnglishWord &englishword);
    friend ostream &operator << (ostream &out, const EnglishWord &englishword);
};

EnglishWord::EnglishWord(string word, string mean, string example)
{
    this->_word = word;
    this->_mean = mean;
    this->_example = example;
}

//==================set method of class =======================

string EnglishWord::getWord(){return this->_word;}
string EnglishWord::getMean(){return this->_mean;}
string EnglishWord::getExample(){return this->_example;}


//================== get method of class ======================

void EnglishWord::update_English(string word, string mean, string example){
    if(word.length()!=0){this->_word = word;}
    if(mean.length()!=0){this->_mean = mean;}
    if(example.length()!=0){this->_example = example;}
}

void EnglishWord::set_English(string word,string mean, string example){
    this->_word = word;
    this->_mean = mean;
    this->_example = example;
}

istream &operator >>(istream &in, EnglishWord &englishword){
    cout<<"word: "<<endl;
    getline(in,englishword._word);
    cout<<"meaning: "<<endl;
    getline(in,englishword._mean);
    cout<<"example: "<<endl;
    getline(in,englishword._example);
}

ostream &operator<<(ostream &out, const EnglishWord &englishword){
    out<<"{"<<englishword._word<<" : "<<englishword._mean<<" : "<<englishword._example<<"}";
}
EnglishWord::~EnglishWord()
{
}

#endif // ENGLISHWORD
