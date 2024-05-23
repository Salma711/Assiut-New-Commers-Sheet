#include<iostream>
#include <string.h>
using namespace std;

int main(){
    int n, s = 1;
    cin>>n;
    string str;
    cin>>str;
    for(int i=1; i<n;i++){
        if(str[i]!=str[i-1]){
            s++;
        }
    }
    cout<<s<<endl;
}