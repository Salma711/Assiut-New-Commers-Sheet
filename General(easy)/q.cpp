#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    string str;
    cin >> str;
    int n = str.size();
    int pos = 'a';
    int moves = 0;
    for (int i = 0; i < n; i++){
        moves += min(abs(str[i] - pos), 26 - abs(str[i] - pos));
        pos = str[i];
    }
    cout << moves;
}