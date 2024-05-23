#include<iostream>
#include <string.h>
using namespace std;

int main(){
    string str, un, pwd, prof, role, key;
    int i = 0;
    cin >> str;
    str.erase(0, 11);
    while(i < str.size()) {
        if(str.substr(i,9) == "username=") {
            i = i+9;
            while(str[i]!='&'){
                un+=str[i];
                i++;
            }
        }
        else if(str.substr(i,4) == "pwd=") {
            i = i+4;
            while(str[i]!='&'){
                pwd+=str[i];
                i++;
            }
        }
        else if(str.substr(i,8) == "profile=") {
            i = i+8;
            while(str[i]!='&'){
                prof+=str[i];
                i++;
            }
        }
        else if(str.substr(i,5) == "role=") {
            i = i+5;
            while(str[i]!='&'){
                role+=str[i];
                i++;
            }
        }
        else if(str.substr(i,4) == "key=") {
            i = i+4;
            while(i < str.size()){
                key+=str[i];
                i++;
            }
        }
        else{
            i++;
        }
    }
    cout<<"username: "<<un<<endl<<"pwd: "<<pwd<<endl
    <<"profile: "<<prof<<endl<<"role: "<<role<<endl
    <<"key: "<<key<<endl;
}