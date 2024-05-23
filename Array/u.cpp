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
    bool f = false;
    while (true)
    {
        if(b[i] == a[j]){
            i++;
            j++;
        }
        else{
            j++;
        }
        if(j == m){}
    }
    f ? cout << "YES" : cout << "NO";
}