#include <iostream>
#include <cmath>
using namespace std;

long long factorial(int a){
    if(a == 0){
        return 1;
    }
    int fac = 1;
    while(a!=1){
        fac *= a;
        a--;
    }
    return fac;
}

long long perm(int a, int b){
    long long perm = 1;
    int dif = a - b;
    while(a!= dif){
        perm *= a;
        a--;
    }
    return perm;
}

long long comb(int a, int b)
{
    long long comb = perm(a, b);
    if(b > 1){
        while (b != 1)
        {
            comb /= b;
            b--;
        }
    }
    return comb;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << comb(a, b)<<" "<< perm(a, b);
}