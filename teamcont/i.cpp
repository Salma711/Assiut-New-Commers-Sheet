#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <vector>
#define ll long long
#include <iostream>

ll binaryToDecimal(string str)
{
    ll dec_num = 0;
    ll power = 0;
    int n = str.length();

    for (int i = n-1; i>= 0 ; i--)
    {

        if (str[i] == '1')
        {
            dec_num += (1LL << power);
        }
        power++;
    }

    return dec_num;
}

int main(){
    string s;
    cin >> s;

    // cout << binaryToDecimal(s);
    string sub = " ";
    ll cnt = 0;
    for (int i = 0; i < s.size();i++){
        sub += s[i];
        
        if (binaryToDecimal(sub)%5==0){
            cnt++;
            
        }
    }
     cout << cnt;
}