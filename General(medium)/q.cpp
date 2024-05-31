#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long
#define salma                          \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    salma;
    int n, m;
    cin >> n >> m;
    int mn = n / 2 + n % 2;
    while (mn <= n && (mn % m))
    {
        // if (!(mn % m))
        //     break;
        mn++;
    }
    if (mn > n)
    {
        cout << -1;
    }
    else
    {
        cout << mn;
    }
}