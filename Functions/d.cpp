#include <iostream>
#include<cmath>
using namespace std;

bool isprime(int p){
    if(p <= 1){
        return false;
    }
    for(int i = 2; i <= sqrt(p); i++){
        if(p%i == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int n, p;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p;
        if(isprime(p)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}