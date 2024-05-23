#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str.substr(i, 5) == "EGYPT"){
            str.replace(i, 5, " ");
        }
    }
    cout<<str;
}