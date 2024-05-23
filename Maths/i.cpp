#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

unsigned ll div(int a, int b, int x)
{
    unsigned ll sum, mn = min(a, b), mx = max(a, b);
    if(mn%x != 0){
        mn = ceil(double(mn) / double(x)) * x;
    }
    if (mx % x != 0)
    {
        mx = floor(double(mx) / double(x)) * x;
    }
    sum = (mx - mn + x) * (mx + mn) / (2 * x);
    return sum;
}

int main()
{
    int a, b, x;
    cin >> a >> b >> x;
    cout << div(a, b, x);
}