#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

bool valid(char c[], int s, int a)
{
    if (c[a] != '-')
        return false;
    int i = 0;
    while (i < a)
    {
        if (!isdigit(c[i]))
            return false;
        i++;
    }
    i++;
    while (i < s)
    {
        if (!isdigit(c[i]))
            return false;
        i++;
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int s = a + b + 1;
    char c[s];
    cin >> c;
    valid(c, s, a) ? cout << "Yes" : cout << "No";
}
