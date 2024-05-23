#include <iostream>
#include<string>
using namespace std;

void bin(int n, string &str)
{
    if (n > 0)
    {
        bin(n / 2, str);
    }
    else
    {
        return;
    }
    str += char(n % 2) + '0';
}

bool ispal(int n){
    string str;
    bin(n, str);
    for(int i = 0; i < str.length()/2; i++){
        if(str[str.length() - i - 1] != str[i]){
            return false;
        }
    }
    return true;
}

bool iswon(int n){
    return (n % 2 != 0 && ispal(n));
}

int main(){
    int n;
    cin >> n;
    if(iswon(n)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}