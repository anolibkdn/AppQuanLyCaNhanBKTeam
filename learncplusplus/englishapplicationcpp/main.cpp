#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include "words.h"
#include "doanchu.h"
#include "controlfile.h"

using namespace std;
vector<words> inputWord(vector<words>);
void outputWords(const vector<words> w);
void writefile(vector<words> w);
void quickSort(vector<words> &w, int l, int r);
void swap(words &w1, words &w2);
char toUpperCharater(char a);
string toLowerString(string);
bool checkData(string data);
string deleteSpace(string);
void InitFile();
vector<words> readFileforname(string name);
// void test(vector <words> w){
//     controlfile c1;
//     c1.setwords(w);
//     c1.writeFile();
// }

int main(int argc, char const *argv[])
{
    try
    {
        vector<words> w;
        w = inputWord(w);
        if (w.size() != 0)
            quickSort(w, 0, w.size() - 1);
        outputWords(w);
        writefile(w);

    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}

void InitFile()
{
    // this code will create file in data forder
    char filename = 'A';

    for (int i = 0; i <= 25; i++)
    {
        ofstream outfile;
        char tmp[] = "database/A_Words.txt";
        tmp[9] = filename;
        cout << tmp << endl;
        outfile.open(tmp, ios::app);
        outfile << 0 << endl;
        filename++;
        outfile.close();
    }
    // ------------------------------------------
}

vector<words> inputWord(vector<words> w)
{
    vector<words> wp;
    string word, mean, example, type, topic;
    string p_posi, p_mean, p_exam;
    vector<Positonwith> p;
    Positonwith cp;
    words cw;
    int key = 1;
    while (key)
    {
        /* code */
        cout << "Word >>> " << endl;
        getline(cin, word);
        cin.ignore();
        if (word == ""){    break;     } //if word is null, the while loop will break
        //when enter data from the keyboad, need to check and transfor to lower charater
        if(!checkData(word)) continue;
        cout << "Mean >>> " << endl;
        getline(cin, mean);
        cin.ignore();
        cout << "Type(n,v,adj,adv,pos) >>> " << endl;
        getline(cin, type);
        cin.ignore();
        cout << "Topic >>> " << endl;
        getline(cin, topic);
        cin.ignore();
        cout << "Example >>> " << endl;
        getline(cin, example);
        cin.ignore();

        while (1)
        {
            cout << "Position>>> " << endl;
            getline(cin, p_posi);
            cin.ignore();
            if (p_posi == "")
                break;
            cout << "New meaning >>> " << endl;
            getline(cin, p_mean);
            cin.ignore();
            cout << "New example >>> " << endl;
            getline(cin, p_exam);
            cin.ignore();
            cp.setPosi(toLowerString(p_posi), toLowerString(p_mean), toLowerString(p_exam));
            p.push_back(cp);
        }


        cw.setWords(toLowerString(word), toLowerString(mean), toLowerString(example), toLowerString(type), toLowerString(topic), p);
        wp.push_back(cw);
    }
    return wp;
}

void outputWords(vector<words> w)
{

    for (int i = 0; i < w.size(); i++)
    {
        cout << w[i].getWord() << "  (" << w[i].getType() << ")" << endl;
        cout << "Mean: " << w[i].getMean() << endl;
        cout << "Ex: " << w[i].getExample() << endl;
        if (w[i].getPosition().size() == 0)
            continue;
        vector<Positonwith> p = w[i].getPosition();

        for (int j = 0; j < w[i].getPosition().size(); j++)
        {
            /* code */
            cout << "   -> " << w[i].getWord() << " " << p[j].getP_Posi() << endl;
            cout << "      "
                 << "Mean: " << p[j].getP_Mean() << endl;
            cout << "      "
                 << "Ex: " << p[j].getP_Exam() << endl;
        }
    }
}

// handel string
char toUpperCharater(char a)
{
    if (a <= 'Z')
    {
        return a;
    }
    else
    {
        return a - ' ';
    }
}

string deleteSpace(string s){
    string tmp = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i]!= ' ') tmp += s[i];
        if(i!=0 && s[i]==' ' && s[i-1]!=' ') tmp += s[i];
    }
    return tmp;
}

string toLowerString(string s){

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i]>= 'A' && s[i] <= 'Z') s[i] += ' ';
    }
    return s;
}

bool checkData(string data){

    for(int i = 0; i < data.length(); i++)
    {
        if(data[i]!= ' ' && (data[i] > 'z' || data[i] < 'A')) return false;
        if(data[i]!= ' ' && (data[i] >'Z' && data[i] <'a')) return false;
    }return true;

}

///==============
void writefile(vector<words> w)
{
    controlfile c1;
    vector<words> ws;
    string value = w[0].getWord();
    char key = value[0];
    int i = 0;
    while (true)
    {
        // string compare = w[i].getWord();
        c1.setNamefile(toUpperCharater(key));
        cout << key << endl;
        while (i < w.size() && key == w[i].getWord()[0])
        {
            ws.push_back(w[i]);
            i++;
        } //a b c
        cout << c1.getNamefile() << endl;
        c1.setwords(ws);
        c1.writeFile();
        ws.clear();
        if (i == w.size())
            break;
        key = w[i].getWord()[0];
    }
}

vector <words> readFileforname(string name){
    controlfile c1;
    vector<words> w;
    c1.setNamefile(name[0]);
    w = c1.readFile();
}

void swap(words &w1, words &w2)
{
    words tmp = w1;
    w1 = w2;
    w2 = tmp;
}

void quickSort(vector<words> &w, int l, int r)
{
    srand(time(NULL));                                  //khoi tao tham so ham rand()
    string key = w[l + rand() % (r - l + 1)].getWord(); //lay khoa la gia tri ngau nhien tu a[l] -> a[r]
    //int key = a[(l+r)/2];
    int i = l, j = r;

    while (i <= j)
    {
        while (w[i].getWord() < key)
            i++; // tim phan tu ben trai ma >=key
        while (w[j].getWord() > key)
            j--; // tim phan tu ben trai ma <=key
        if (i <= j)
        {
            if (i < j)
                swap(w[i], w[j]); // doi cho 2 phan tu kieu int a[i], a[j].
            i++;
            j--;
        }
    }
    //bay gio ta co 1 mang : a[l]....a[j]..a[i]...a[r]
    if (l < j)
        quickSort(w, l, j); // lam lai voi mang a[l]....a[j]
    if (i < r)
        quickSort(w, i, r); // lam lai voi mang a[i]....a[r]
}
