#include <iostream>
#include<bits/stdc++.h>
#include <string.h>
using namespace std;



int main(){
    string str;
    int n = 0;
    getline(cin, str);
    for(int i=0; i<str.size(); i++){
        if(isalpha(str[i])){
            n = i;
            i++;
            while(true){
                if(isalpha(str[i])){
                    i++;
                }
                else{
                    break;
                }
            }
            reverse(str.begin() + n, str.begin() + i);
            n = 0;
        }
    }
    cout<<str;
}

