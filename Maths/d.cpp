#include <iostream>
using namespace std;
#define ll long long

ll fun(ll a, ll b, ll q){
    q = q % 3;
    if(q == 1){
        return a;
    }
    else if(q == 2){
        return b;
    }
    else{
        return a ^ b;
    }
}

int main(){
    ll a, b, q;
    cin >> a >> b >> q;
    ll f = fun(a, b, q);
    cout << f;
}