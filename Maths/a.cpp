#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n;
    cin>>n;
    double m = log2l(n);
    if(m == static_cast<int>(m)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}