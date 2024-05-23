#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <vector>
#define ll long long
#include <iostream>
vector<ll> v;
int main() {
    int t;cin >> t;
    while (t--)
    {
        long long sum = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            sum += s[i] - 48;
        }
        cout << sum<<endl;
    }
    
    

    return 0;
}