#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool online(float x1, float y1, float x2, float y2, float x3, float y3)
{
    return (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2 == 0;
}
int main()
{
    float x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (online(x1, y1, x2, y2, x3, y3))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}