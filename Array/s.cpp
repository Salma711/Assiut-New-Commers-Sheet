#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    int n, m, x;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> x;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j] == x)    
            {
                found = true;
                break;
            }
        }
    }
    found ? cout << "will not take number" : cout << "will take number";
}

// 2 3
// 1 2 3
// 1 2 3