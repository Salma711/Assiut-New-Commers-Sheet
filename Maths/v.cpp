#include <iostream>
#include <cmath>
using namespace std;

bool parallel(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
    return (y2 - y1) * (x4 - x3) == (y4 - y3) * (x2 - x1);
}
int main()
{
    float x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if (parallel(x1, y1, x2, y2, x3, y3, x4, y4))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}