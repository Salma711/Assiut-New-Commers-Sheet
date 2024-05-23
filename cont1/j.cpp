#include<iostream>
using namespace std;

int main(){
    freopen("Symbol.in", "r", stdin);
    string str;
    cin >> str;
    int n = 0;
    for (int i = 0; i < str.size(); i++){
        if(str[i] == '+'){
            n++;
        }
        else if(str[i] == '-'){
            n--;
        }
    }
    cout << n;
}