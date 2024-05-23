#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mult = a %100;
    mult = mult * (b % 100) % 100;
    mult = mult * (c % 100) % 100;
    mult = mult * (d % 100) % 100;
    cout << setw(2) << setfill('0') << mult;
}