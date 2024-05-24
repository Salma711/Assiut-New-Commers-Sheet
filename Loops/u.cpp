#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int sum(int n)
{
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n, a, b, s = 0;
    cin >> n >> a >> b;
    for(int i = 1; i <= n; i++)
    {
        int temp = sum(i);
        if (temp >= min(a, b) && temp <= max(a, b))
            s += i;
    }
    cout << s;
}