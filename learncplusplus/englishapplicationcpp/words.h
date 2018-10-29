
#if !defined(WORDS)
#define WORDS
#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
    create a Positionwith class with 3 valuable
    - postion
    - mean when it's words class together
    - example for each positon
*/
/************************************************************************************/
/*                                     POSITON                                      */
/************************************************************************************/
class Positonwith
{
  private:
    /* data */
    string m_posi, m_mean, m_exam;

  public:
    Positonwith(/* args */);
    Positonwith(string, string, string);
    string getP_Posi();
    string getP_Mean();
    string getP_Exam();
    void setP_Posi(string);
    void setP_Mean(string);
    void setP_Exam(string);
    void setPosi(string, string, string);
    ~Positonwith();
};

Positonwith::Positonwith(/* args */)
{
    this->m_exam = "";
    this->m_mean = "";
    this->m_posi = "";
}

Positonwith::Positonwith(string p, string m, string e)
{
    this->m_posi = p;
    this->m_mean = m;
    this->m_exam = e;
}

string Positonwith::getP_Posi()
{return this->m_posi;}
string Positonwith::getP_Mean()
{return this->m_mean;}
string Positonwith::getP_Exam()
{return this->m_exam;}
void Positonwith::setP_Posi(string p)
{this->m_posi = p;}
void Positonwith::setP_Mean(string m)
{this->m_mean = m;}
void Positonwith::setP_Exam(string e)
{this->m_exam = e;}

void Positonwith::setPosi(string p, string m, string e){
    this->m_posi = p;
    this->m_mean = m;
    this->m_exam = e;
}
Positonwith::~Positonwith()
{
}

/*========================================END=======================================*/

/************************************************************************************/
/*                                      WORDS                                       */
/************************************************************************************/
class words
{
  private:
    /* data */
    string m_word, m_mean, m_type, m_example, m_topic;
    vector<Positonwith> p;

  public:
    words(/* args */);
    words(string, string, string, string, string);
    //get method in words class
    string getWord();
    string getMean();
    string getType();
    string getExample();
    string getTopic();
    vector<Positonwith> getPosition();
    //set method in words class

    void setWord(string);
    void setMean(string);
    void setExample(string);
    void setType(string);
    void setTopic(string);
    void setPositionwith(vector<Positonwith>);
    void setWords(string, string, string,string,string,vector<Positonwith>);
    ~words();
};

words::words(/* args */)
{
    this->m_word = "";
    this->m_mean = "";
    this->m_example = "";
    this->m_type = "";
    this->m_topic = "";
}

words::words(string word, string meam, string type, string example, string topic)
{
    this->m_word = word;
    this->m_mean = meam;
    this->m_example = example;
    this->m_topic = topic;
    this->m_type = type;
}

string words::getWord(){return this->m_word;}
string words::getMean(){return this->m_mean;}
string words::getExample(){return this->m_example;}
string words::getType(){return this->m_type;}
string words::getTopic(){return this->m_topic;}
vector<Positonwith> words::getPosition(){
    return this->p;
}

void words::setWord(string word){this->m_word = word;}
void words::setMean(string mean){this->m_mean = mean;}
void words::setExample(string example){this->m_example = example;}
void words::setTopic(string topic){this->m_topic = topic;}
void words::setType(string type){this->m_type = type;}
void words::setPositionwith(vector<Positonwith> p){
    this->p = p;
}

void words::setWords(string word, string mean, string example,string type,string topic,const vector<Positonwith> p){
    this->m_word = word;
    this->m_mean = mean;
    this->m_example = example;
    this->m_topic = topic;
    this->m_type = type;
    this->p = p;
}
words::~words()
{
}

/*========================================END=======================================*/

#endif // WORDS


