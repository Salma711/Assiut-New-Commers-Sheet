#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int gcd(int a, int b)
{
    int r;
    int temp = max(a, b);
    b = min(a, b);
    a = temp;
    while (true)
    {
        r = a % b;
        if (r == 0)
        {
            break;
        }
        a = b;
        b = r;
    }
    return b;
}

ll lcm(int a, int b)
{
    ll a2 = a;
    ll b2 = b;
    return (a2 * b2)/gcd(a,b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b);
}