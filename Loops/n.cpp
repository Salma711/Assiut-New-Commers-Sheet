#include <iostream>
#include <cmath>
using namespace std;
#define ll long long


int main()
{
    char c;
    int t, n;
    cin >> c >> t;
    while(t--)
    {
        cin >> n;
        while(n--){
            cout << c;
        }
        cout << "\n";
    }
}