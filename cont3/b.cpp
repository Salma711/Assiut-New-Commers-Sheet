#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long
#define salma                          \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);

int main(){
    salma;
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 0 && i > 0)
        {
            reverse(a, a + i);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}