#include <iostream>
using namespace std;
#define ll long long

void bin(ll n){
    if(n>0){
        bin(n / 2);
    }
    else{
        return;
    }
    cout << n % 2;
}

int main(){
    int t;
    ll n;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        bin(n);
        cout << "\n";
    }
}