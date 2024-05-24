#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int m(int arr[], int i, int j)
{
    int m = arr[i];
    for (int k = i + 1; k <= j; k++){
        m = max(m, arr[k]);
    }
    return m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--) 
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                cout << m(a, i, j) << " ";
            }
        }
        cout << "\n";
    }
}
