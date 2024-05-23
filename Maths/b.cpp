#include<iostream>
#include<cmath>
using namespace std;
#define ll long long 

bool isprime(ll n){
    if(n <= 1){
        return false;
    }
    for(ll i = 2; i <= sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    ll n;
    cin>>n;
    if(isprime(n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}