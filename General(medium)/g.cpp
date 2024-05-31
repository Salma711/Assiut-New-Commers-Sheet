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
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    b[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        b[i] = b[i - 1] + a[i];
    }
    int i = 0;
    while(n>i)
    {
        if(b[i] > (b[n-1] - b[i]))
            break;
        i++;
    }
    cout << i + 1;
}