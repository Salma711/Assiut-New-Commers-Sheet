#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    int a, b;
    while (true)
    {
        int sum = 0;
        cin >> a >> b;
        if (a <= 0 || b <= 0)
        {
            break;
        }
        if (b < a)
        {
            swap(a, b);
        }
        for (int i = a; i <= b; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << "\n";
    }
}