#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main(){
    string str, s;
    cin >> str >> s;
    int s2 = s.size();
    int  x = 0, y = 0;
    while(y != s2){
        if(str[x] == s[y]){
            x++;
            y++;
        }
        else{
            y++;
        }
    }
    cout << x + 1;
}