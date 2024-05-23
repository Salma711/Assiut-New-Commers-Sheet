#include<iostream>
#include <string.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int s = str.size();
    for(int i = 0; i < s; i++){
        if(str[i] == ',')
            str[i] = ' ';
        else if(str[i] >= 97){
            str[i] = str[i] - 32;
        }
        else{
            str[i] = str[i] + 32;
        }
    }
    cout<<str;
}