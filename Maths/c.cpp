#include<iostream>
#include<cmath>
using namespace std;
#define ll long long 

ll evensum(ll a, ll b){
    ll small = min(a, b), big = max(a, b), sum ;
    if (small % 2 != 0)
    {
        small++;
    }
    if (big % 2 != 0)
    {
        big--;
    }
    sum = (big-small+ 2)*(big+small)/4;
    return sum;
}

ll oddsum(ll a, ll b)
{
    ll small = min(a, b), big = max(a, b), sum;
    if (small % 2 == 0)
    {
        small++;
    }
    if (big % 2 == 0)
    {
        big--;
    }
    sum = (big - small + 2) * (big + small)/4;
    return sum;
}

int main(){
    ll a, b, sum , esum, osum;
    cin>>a>>b;
    sum = (max(a, b) * (max(a, b) + 1)) / 2 - ((min(a, b) - 1) * min(a, b)) / 2;
    esum = evensum(a, b);
    osum = oddsum(a, b);
    cout << sum << "\n"
         << esum << "\n"
         << osum;
}
