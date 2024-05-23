#include <iostream>
#include <string>
using namespace std;

bool isvow(char c) {
    return (c == 'a' || c == 'i' || c == 'o' || c == 'u' || c == 'e');
}

void vow(string str, int n, int &v){
    if(n < 0){
        return;
    }
    if(isvow(str[n])){
        v++;
    }
    vow(str, n - 1, v);
}

int main(){
    int v = 0;
    string str;
    getline(cin, str);
    vow(str, str.size() - 1, v);
    cout << v;
}