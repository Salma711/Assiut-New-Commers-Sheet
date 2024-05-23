#include <iostream>
using namespace std;

int main()
{
    int a, b, e;
    char c, d;
    cin >> a >> c >> b >> d >> e;
    if (c == '+')
    {
        if (a + b == e)
        {
            cout << "Yes";
        }
        else
        {
            cout << a + b;
        }
    }
    else if (c == '-')
    {
        if (a - b == e)
        {
            cout << "Yes";
        }
        else
        {
            cout << a - b;
        }
    }
    else if (c == '*')
    {
        if (a * b == e)
        {
            cout << "Yes";
        }
        else
        {
            cout << a * b;
        }
    }
}