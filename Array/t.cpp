#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    int n, main = 0, sec = 0;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if(i == j)
            {
                main += a[i][j];
            }
            if(i + j == n -1){
                sec += a[i][j];
            }
        }
    }
    cout << abs(main - sec);
}