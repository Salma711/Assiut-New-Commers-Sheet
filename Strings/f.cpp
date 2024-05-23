#include<iostream>
#include <string.h>
using namespace std;

int main(){
    int n, s;
    string str;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>str;
        s = str.size();
        if(s>10){
            cout<<str[0]<<s-2<<str[s-1]<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }
}