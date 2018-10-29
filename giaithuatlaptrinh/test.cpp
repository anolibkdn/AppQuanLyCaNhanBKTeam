#include<iostream>
#include<string>
#include<string.h>
using namespace std;
std::string reverseParentheses(std::string s) {
    
    
    string result = "";
    for(int i=0;i<s.length();i++){
        if(s[i] == ')'){
            for(int j=i-1;j>=0;j--){
                if(s[j] =='('){
                    string tmp ="";
      
                    for(int k=j+1;k<i;k++){
                        tmp+= s[k];
                    }
                    cout<<"tmp: "<<tmp<<endl;
                    tmp = reverse(tmp);
                  
                    for(int k=j+1;k<i;k++){
                        s[k] = tmp[k-j-1];
                    }
                    s[i] = '-';
                    s[j] = '-';
                    break;
                }
            }
        }
    
    }
    for(int i=0;i<s.length();i++){
        if(s[i]!='-') result += s[i];
    }
    cout<<result<<endl;
    return result;
}

std::string reverse(std::string s){
    string result = "";
    int length = s.length();
    for(int i=0;i<length;i++){
        result += s[length-i-1];
    }return result;
}



int main(int argc, char const *argv[])
{
    string s = "co(de(fight)s)";
    cout<<s.length()<<endl;
    cout<<reverseParentheses(s);
    return 0;
}
