#include <iostream>
#include<cmath>
using namespace std;
#define ll unsigned long long

ll dis(ll n){
    ll sqrt_n = sqrt(2*n);
    for (ll i = sqrt_n - 1; i < n; i++)
    {
        if(i * (i+1)/2 > n ){
            return i - 1;
        }
    }
    return n;
}

int main(){
    ll n;
    cin >>  n;
    cout << dis(n);
}