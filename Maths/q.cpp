#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

ll fact(int l, int r, int m){
    ll fac = 1;
    while(r >= l)
    {
        fac *= r;
        fac = fac % m;
        r--;
    }
    return fac;
}

int main(){
    int l, r, m;
    cin >> l >> r >> m;
    cout << fact(l, r, m);
}