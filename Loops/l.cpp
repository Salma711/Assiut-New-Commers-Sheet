#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    int a, b, rem;
    cin >> a >> b;
    if(b > a)
        swap(a, b);
    rem = a % b;
    while(rem){
        a = b;
        b = rem;
        rem = a % b;
    }
    cout << b;
}