#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool m(int arr[], int i, int j)
{
    for (int k = i + 1; k <= j; k++)
    {
        if(arr[k] < arr[k-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        int cn = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if(m(a, i, j))
                    cn++;
            }
        }
        cout << cn << "\n";
    }
}
