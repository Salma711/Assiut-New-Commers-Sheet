#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string origin = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string str;
    int n, pos;
    cin>>n;
    cin>>str;
    if(n==1){
        for(int i =0; i < str.size();i++){
            pos = origin.find(str[i]);
            cout<<key[pos];
        }
    }
    else if(n==2){
        for(int i =0; i < str.size();i++){
            pos = key.find(str[i]);
            cout<<origin[pos];
        }
    }
}