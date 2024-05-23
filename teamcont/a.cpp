#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <map>
#define ll long long
#include <iostream>
#include<cmath>

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int o, t, s = 0;
        cin >> o >> t;
        s += ceil(float(t) / 2);
        t = 15 * s - 4 * t;
        o = t - o;
        if(o < 0){
            o = abs(o);
            while(o > 0){
                s++;
                o -= 15;
            }
        }
        cout << s << "\n";
    }
}
        
