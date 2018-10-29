#include <iostream>
#include <fstream>
#include <string>
#include<string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string word;
    string mean;
    string example;
    int n = 1;
    cout << "word: " << endl;
    getline(cin, word);
    cin.ignore();

    cout << "meaning: " << endl;
    getline(cin, mean);
    cin.ignore();

    cout << "example: " << endl;
    getline(cin, example);
    cin.ignore();

    //mo file data.txt de ghi
    ofstream file_out;
    file_out.open("data.txt");

    // ghi du lieu vao file

    file_out << n << ":" << word << ":" << mean << ":" << example << endl;

    //dong file
    file_out.close();

    //doc du lieu tu file
    string data[3];
    ifstream file_in;
    file_in.open("data.txt");
    int count = 0;
    char key = ':';
    while(count < 3){
        char tmp;
        file_in>>tmp;

        if(tmp == key) {
            ++count;
        }
        if(count == 0 && tmp!=':') data[0] += tmp;
        else if(count == 1 && tmp!=':') data[1] += tmp;
        else if(count == 2 && tmp!=':') data[2] += tmp;
    }   
    // cout<<count<<endl;
    file_in.close();
    cout<<data[0]<<endl;
    cout<<data[1]<<endl;
    cout<<data[2]<<endl;
    return 0;
}
