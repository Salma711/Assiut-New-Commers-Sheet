#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    int a, b, c, d;
    double dis;
    cin >> a >> b >> c >> d;
    
    dis = sqrt(pow(a - c, 2) + pow(b - d, 2));
    cout << setprecision(11)<<dis;
}