#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main(){
    ll fib[50] = {0};
    fib[1] = 1;
    for (int i = 2; i < 50; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int n;
    cin >> n;
    cout << fib[n - 1];
}