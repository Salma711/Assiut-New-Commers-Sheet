#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main(){
    int n, x = 0;
    cin >> n;
    int temp = n;
    while(temp)
    {
        x = x * 10 + temp % 10;
        temp /= 10;
    }
    cout << x << "\n";
    (x == n) ? cout << "YES" : cout << "NO";
}