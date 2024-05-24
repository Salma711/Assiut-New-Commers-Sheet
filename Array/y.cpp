#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, l, r;
    cin >> n >> q;
    int a[n];
    ll b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    b[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        b[i] = a[i] + b[i - 1];
        
    }
    while(q--)
    {
        cin >> l >> r;
        if(l == 1)
        {
            cout << b[r - 1]<<"\n";
        }
        else
        {
            cout << b[r - 1] - b[l - 2]<< "\n";
        }
    }
}