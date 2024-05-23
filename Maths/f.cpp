#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> m >> k;
    int b[m][k];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> b[i][j];
        }
    }
    int c[n][k], sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            sum = 0;
            for (int l = 0; l < m; l++)
            {
                sum += a[i][l] * b[l][j];
            }
            c[i][j] = sum;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }
}
