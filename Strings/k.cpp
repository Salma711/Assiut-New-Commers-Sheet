#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x, y, z;
        int s1, s2, s = 0;
        cin >> x >> y;
        s1 = x.size();
        s2 = y.size();
        if (s1 < s2)
        {
            s = s2;
        }
        else
        {
            s = s1;
        }
        for (int i = 0; i < s; i++)
        {
            if (s1 > i)
                z += x[i];
            if (s2 > i)
                z += y[i];
        }
        cout << z << endl;
    }
}