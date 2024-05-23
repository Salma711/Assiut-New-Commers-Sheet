#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool istriangle(int a, int b, int c)
{
    return (a + b > c && a + c > b && b + c > a);
}

int main()
{
    int a, b, c;
    float s, area;
    cin >> a >> b >> c;
    if(istriangle(a, b, c)){
        cout << "Valid\n";
        s = (a+b+c)/2;
        area = sqrt(s * (s - a) * (s - b) * (s - b) * (s - c));
        cout <<setprecision(8) <<area;
    }
    else{
        cout << "Invalid";
    }
}