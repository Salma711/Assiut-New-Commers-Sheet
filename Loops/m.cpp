#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

bool islucky(int n)
{
    while(n){
        if(n%10 != 4 && n%10 != 7)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main(){
    int a, b, cn = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) 
    {
        if(islucky(i)){
            cout << i << " ";
            cn++;
        }
    }
    if(cn == 0)
    {
        cout << -1;
    }
}