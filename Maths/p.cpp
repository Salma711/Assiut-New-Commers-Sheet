#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

ll factorial(int a)
{
    if (a <= 3)
    {
        return 1;
    }
    double fac = 1;
    ll digits = 0;
    while (a != 1)
    {
        fac *= a;
        while(fac >= 10){
            fac /= 10;
            digits++;
        }
        a--;
    }
    if(fac >= 1){
        while(int(fac) != 0)
        {
            digits++;
            fac = int(fac) %10;
            fac /= 10;
        }
    }
    return digits;
}

int main(){
    int n;
    cin >> n;
    ll a = factorial(n);
    cout << "Number of digits of " << n << "! is " << a;
}