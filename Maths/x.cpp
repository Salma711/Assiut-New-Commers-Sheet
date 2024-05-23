#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long


int main(){
    float x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if (x1 == x2)
    {
        x2 = x3;
    }
    if (y1 == y2)
    {
        y2 = y3;
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        float x, y;
        cin >> x >> y;
        if (x >= min(x1, x2) && x <= max(x1, x2) && y >= min(y1, y2) && y <= max(y1, y2))
        {
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
}