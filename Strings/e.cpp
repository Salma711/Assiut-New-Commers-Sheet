#include<iostream>
#include <string.h>
using namespace std;

int main(){
    string str;
    int sum = 0, s;
    getline(cin, str);
    s = str.size();
    for(int i = 0; i < s; i++){
        sum += str[i] - '0';
    }
    cout<<sum;
}