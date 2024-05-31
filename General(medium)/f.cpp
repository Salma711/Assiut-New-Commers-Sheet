#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long
#define salma ios_base ::sync_with_stdio(false); cin.tie(NULL);


int main(){
    int n, m, d = 2000;
    cin >> n >> m;
    int a[m];
    for(int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    for (int i = 0; i <= m - n; i++)
    {
        int temp = abs(a[i] - a[i + n - 1]);
        if(temp < d){
            d = temp;
        }
    }
    cout << d;
}