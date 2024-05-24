#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    int fib1 = 0, fib2 = 1;
    cout << fib1 << " ";
    if(n >= 2)
        cout << fib2 << " ";
    for(int i = 3; i <= n; i++)
    {
        int temp = fib2;
        fib2 += fib1;
        fib1 = temp;
        cout << fib2 << " ";
    }
}