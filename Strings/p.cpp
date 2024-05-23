#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string str;
    int n = 0;
    getline(cin, str);
    for(int i = 0; i < str.size(); i++){
        if(isalpha(str[i])){
            n++;
            while(true){
                if(isalpha(str[i])){
                    i++;
                }
                else{
                    break;
                }
            }
        }
    }
    cout<<n;
}