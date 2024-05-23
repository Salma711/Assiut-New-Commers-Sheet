#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if(n == 0){
            cout << 0;
        }
        while(n)
        {
            cout << n % 10<< " ";
            n /= 10;
        }
        cout << "\n";
    }
}