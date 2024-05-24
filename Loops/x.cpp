#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int digits(int n){
    int o = 0, p = 0, d = 0;
    while(n){
        o += n % 2;
        n /= 2;
    }
    while(o){
        d += pow(2, p++);
        o--;
    }
    return d;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--) 
    {
        cin >> n;
        cout << digits(n) << "\n";
    }
}