#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
#include<vector>
#define ll long long
#include <iostream>
vector<ll> v;
int main()
{

    int t, r = 1, rab = 2, n;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int n, r = 1;
        cin >> n;
        if(n==1)
             {cout << "1"<<endl;}
       else
       { while (r < n)
        {
            r *= 2;
            count++;
        }
        cout << count << endl;
       }
    }
}