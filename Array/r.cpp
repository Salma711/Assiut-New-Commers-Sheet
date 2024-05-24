#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    bool found;
    for (int i = 0; i < n; i++)
    {
        found = false;
        for(int j = 0; j < n; j++){
            if(a[i] == b[j])
            {
                found = true;
                b[j] = 0;
                break;
            }
        }
        if(!found)
            break;
    }
    found ? cout << "yes" : cout << "no";
}