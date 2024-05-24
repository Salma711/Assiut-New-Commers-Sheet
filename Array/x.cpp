#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    int n, m, x, y;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    cin >> x >> y;
    bool found = true;
    for (int i = x - 2; i <= x;  i++)
    {
        for (int j = y - 2; j <= y; j++)
        {
            
            if (!(i == x - 1 && j == y - 1) && i >= 0 && j >= 0 && i < n && j < m)
            {
                if (a[i][j] != 'x'){
                    found = false;
                    break;
                }
            }
        }
    }
    found ? cout << "yes" : cout << "no";
}