
#if !defined(CONTROLFILE)
#define CONTROLFILE

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <string.h>
#include "words.h"
using namespace std;

class controlfile
{
  private:
    /* data */
    char filename;
    char namedf[20];
    vector<words> w;

  public:
    controlfile(/* args */);
    void setNamefile(char);
    void setwords(vector<words>);
    string getNamefile();

    vector<words> readFile();
    void writeFile();
    ~controlfile();
};

controlfile::controlfile()
{
    filename = 'A';
    strcpy(namedf, "database/A_Words.txt");
}
controlfile::~controlfile() {}

void controlfile::setNamefile(char c)
{
    this->filename = c;
}

string controlfile::getNamefile()
{
    string name = this->namedf;
    name[9] = this->filename;
    return name;
}

// this is function can return a vector of words header
// su dung ham getline phan tich du lieu lays
vector<words> controlfile::readFile()
{
    vector<words> w;
    vector<Positonwith> p;
    char *nf = this->namedf;
    nf[9] = this->filename;
    ifstream infile;
    infile.open(nf);
    string word,mean,example,type,topic;
    string p_posi,p_mean,p_exam;
    words c_w;
    Positonwith c_p;
    string line;
    if (infile.is_open())
    {
        while (!infile.eof())
        {
            getline(infile, line);
            
            for(int i = 0; i < line.length(); i++)
            {//igo|toschool hoac truong hop c|||||
                
            }
            
            line.clear();
        }
        infile.close();
    }
    return w;
}
void controlfile::writeFile()
{
    // vector<words> w;
    char *nf = this->namedf;
    nf[9] = this->filename;
    ifstream infile;
    char k;
    infile.open(nf);
    infile >> k;
    k += w.size();
    infile.close();
    ofstream outfile;
    outfile.open(nf, ios::app);

    for (int i = 0; i < this->w.size(); i++)
    {

        outfile << w[i].getWord() << "|" << w[i].getType() << "|" << w[i].getMean() << "|" << w[i].getExample() << "|" << w[i].getTopic() << "|";
        vector<Positonwith> p = this->w[i].getPosition();
        for (int j = 0; j < p.size(); j++)
        {
            outfile << p[j].getP_Posi() << "|" << p[j].getP_Mean() << "|" << p[j].getP_Exam();
        }
        outfile << endl;
    }
    // outfile.seekp(0, ios::beg);
    // cout << "vi tri: " << outfile.tellp() << endl;
    // outfile << k << endl;
    outfile.close();
}

void controlfile::setwords(vector<words> w)
{
    this->w = w;
}
#endif // CONTROLFILE
