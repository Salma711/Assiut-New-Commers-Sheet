#include <iostream>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

int main()
{
    int n, b, d, cn = 0, x, w = 0;
    cin >> n >> b >> d;
    while(n--)
    {
        cin >> x;
        if(b >= x){
            w += x;
        }
        if(w > d){
            w = 0;
            cn++;
        }
    }
    cout << cn;
}