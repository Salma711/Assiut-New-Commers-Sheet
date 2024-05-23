#include <iostream>
#include<bits/stdc++.h>
#include <string.h>
using namespace std;


int main()
{
    string str, v;
    cin >> str;
    v = str;
    int s = str.size();
    if (s <= 2)
    {
        cout << str << endl;
    }
    else{
        for (int i = 0; i < s - 1; i++)
        {
            string a, b;
            a = str.substr(0, i + 1);
            sort(a.begin(), a.end());
            b = str.substr(i+1, s-(i+1));
            sort(b.begin(), b.end());
            v = min(v, a+b);
        }
        cout<<v<<endl;
    }
}