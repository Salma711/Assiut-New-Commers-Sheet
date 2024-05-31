#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
#define ll long long
#define salma                          \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);
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
    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
int prime(int n)
{
    if (n == 2)
    {
        return 3;
    }
    if (n == 3)
    {
        return 5;
    }
    int i = 5 + ((n - 5) - (n - 5) % 6);
    if (n == i)
    {
        if (!isprime(i + 2))
        {
            return i + 6;
        }
        return i + 2;
    }
    if (n == i + 2)
    {
        if (!isprime(i + 6))
        {
            return i + 8;
        }
        return i + 6;
    }
    return 0;
}
int main()
{
    salma;
    int n, m;
    cin >> n >> m;
    if (m == prime(n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}