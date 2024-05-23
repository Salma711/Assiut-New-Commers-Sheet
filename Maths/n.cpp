#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long
// int arr[26] = {0};
ll basetodec(string s, int x) {
    ll n = 0;
    ll power = 0;
    int si = s.size();
    for (int i = si-1; i >= 0; i--)
    {
        if (isalpha(s[i]))
        {
            n += (s[i] - '0' - 7) * pow(x, power++);   
        }
        else{
            n += (s[i] - '0') * pow(x, power++);
        }
        
    }
    return n;
}
string dectobase(int n, int x) {
    string s;
    
    while(n != 0){
        double y = n;
        y /= x;
        n /= x;
        y = y -n;
        y *= x;
        if (y > 9)
        {
            s += (y - 10) + 'A';
        }
        else{
            s += (y) + '0';
        }
    }
    reverse(s.begin(), s.end());
    return s;
}
int main(){
    int t, x;
    cin >> t;
    if (t == 1)
    {
        string n;
        cin >> n >> x;
        cout << basetodec(n, x);
    }
    else
    {
        int n;
        cin >> n >> x;
        cout << dectobase(n, x);
    }
}