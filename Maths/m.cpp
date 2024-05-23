#include <iostream>
#include <cmath>
using namespace std;

bool isdivisible(string str, int a) 
{
    long long s = 0;
    for(int i = 0; i < str.length(); i++)
    {
        s = s * 10 + (str[i] - '0');
        s %= a;
    }
    if(s != 0) return false;
    return true;
}

int main()
{
    string str;
    int a;
    cin >> str >> a;
    isdivisible(str, a)? cout<<"YES":cout<<"NO";
}