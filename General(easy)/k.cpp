#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

bool isprime(ll n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (ll i = 5; i * i <= n; i+=6)
    {
        if (n % i == 0 || n % (i+2) == 0)
        {
            return false;
        }
    }
    return true;
}


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    ll fib[50] = {0};
    int prime[50] = {0};
    fib[1] = 1;
    for (int i = 2; i < 50; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        if(isprime(fib[i])){
            prime[i] = 1;
        }
    }
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if(prime[n-1]){
            cout << "prime\n";
        }
        else
            cout << "not prime\n";
    }
    }