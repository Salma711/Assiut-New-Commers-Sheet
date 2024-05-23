#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    if(n >= 0)
    {
        cout << n;
    }
    else if(abs(n)%10 < (abs(n)%100)/10)
    {
        int temp = abs(n) % 10;
        n /= 100;
        n *= 10;
        n -= temp;
        cout << n;
    }
    else
    {
        cout << n / 10;
    }
}