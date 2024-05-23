#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            cout << i << "\n";
        }
    }
}