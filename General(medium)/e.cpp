#include <iostream>
#include <cmath>
#include <string>
using namespace std;
#define ll long long

int main()
{
    string str1 = "qwertyuiop", str2 = "asdfghjkl;", str3 = "zxcvbnm,./";
    char c;
    string q, r;
    cin >> c >> q;
    int s = q.size();
    if (c == 'L')
    {
        for (int i = 0; i < s; i++)
        {
            if (str1.find(q[i]) != string::npos)
            {
                r += str1[str1.find(q[i]) + 1];
            }
            else if (str2.find(q[i]) != string::npos)
            {
                r += str2[str2.find(q[i]) + 1];
            }
            else if (str3.find(q[i]) != string::npos)
            {
                r += str3[str3.find(q[i]) + 1];
            }
        }
    }
    else
    {
        for (int i = 0; i < s; i++)
        {
            if (str1.find(q[i]) != string::npos)
            {
                r += str1[str1.find(q[i]) - 1];
            }
            else if (str2.find(q[i]) != string::npos)
            {
                r += str2[str2.find(q[i]) - 1];
            }
            else if (str3.find(q[i]) != string::npos)
            {
                r += str3[str3.find(q[i]) - 1];
            }
        }
    }
    cout << r;
}