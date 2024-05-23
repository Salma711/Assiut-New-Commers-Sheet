#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int med(int s){
    if(s==1){
        return 0;
    }
    if(s%2 == 0){
        return (s / 2) - 1;
    }
    return s / 2;
}
int main(){
    int n;
    string str, s;
    cin >> n >> str;
    // int x = str.size();
    while (str.size() > 0)
    {
        s += str[med(str.size())];
        str.erase(med(str.size()), 1);
    }
    cout << s;
}