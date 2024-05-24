#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            j++;
        }
        i++;
    }
    if (j == m && b[j - 1] == a[i - 1])
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}