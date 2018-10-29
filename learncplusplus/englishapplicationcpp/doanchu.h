
#if !defined(DOANCHU)
#define DOANCHU

#include <iostream>
#include <string>


using namespace std;

class doanchu
{
  private:
    /* data */
    string w;

  public:
    doanchu(/* args */);
    void setDoanchu(string w);
    string hintcharater();
    string getcharater();
    string goiy(int n);
    int maxGoiy();
    bool check(string);
    ~doanchu();
};

doanchu::doanchu(/* args */)
{
    this->w = "";
}

doanchu::~doanchu()
{
}

void doanchu::setDoanchu(string w)
{
    this->w = w;
}

string doanchu::getcharater()
{
    return this->w;
}

string doanchu::hintcharater()
{

    string kq;
    for (int i = 0; i < this->w.length(); i++)
    {
        /* code */
        if (i % 2 == 1)
        {
            kq += "_";
        }
        else
        {
            kq += w[i];
        }
    }
    return kq;
}

string doanchu::goiy(int n)
{
    if (w.length() < 4)
    {
        string kq;
        for (int i = 0; i < this->w.length(); i++)
        {
            /* code */
            if (i % 2 == 1)
            {
                kq += "_";
            }
            else
            {
                kq += w[i];
            }
        }
        return kq;
    }
    else
    {
        string kq;
        for (int i = 0; i < this->w.length(); i++)
        {
            /* code */
            if (i % 2 == 1 && n < 0)
            {
                kq += "_";
            }
            else
            {
                kq += w[i];
            }
            n--;
        }
        return kq;
    }
}

int doanchu::maxGoiy(){
    return w.length()/2 -1;
}

bool doanchu::check(string w){
    if(this->w == w){
        return true;
    }return false;
}

#endif // DOANCHU
