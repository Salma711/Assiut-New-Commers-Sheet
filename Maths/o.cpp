#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

string add(string str){
    int rem = 0, si = str.size();
    int i;
    string s;
    for (i = si - 1; i >= si - 5; i--)
    {
        s += ((str[i] - '0' + 9 + rem) % 10) + '0';
        rem = (str[i] - '0' + 9 + rem)/10;
    }
    while(rem != 0){
        s += ((str[i] - '0' + rem) % 10) + '0';
        rem = (str[i] - '0' + rem) /10;
        i--;
    }
    
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    cout << add("1");
}