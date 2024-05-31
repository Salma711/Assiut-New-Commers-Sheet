#include <iostream>
#include <string>
using namespace std;
#define ll long long

ll fac(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    return n * fac(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << fac(n);
}