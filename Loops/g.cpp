#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        ll fac = 1;
        cin >> n;
        for (int j = n; j > 1; j--)
        {
            fac *= j;
        }
        cout << fac << "\n";
    }
}