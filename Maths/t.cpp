#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool incircle(int x, int y, int r, int x1, int y1)
{
    return sqrt(pow(x - x1, 2) + pow(y - y1, 2)) <= r;
}
int main(){
    int x, y, r, n, x1, y1;
    cin >> x >> y >> r >> n;
    for(int i = 0; i < n;i++){
        cin >> x1 >> y1;
        if (incircle(x, y, r, x1, y1))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}