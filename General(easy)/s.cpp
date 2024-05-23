#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

bool ink(int s, int k)
{
    for (int i = 0; i <= k; i++)
    {
        int x = s;
        bool e = false;
        while (x != 0)
        {
            int j = x % 10;
            x /= 10;
            if(j == i){
                e = true;
                break;
            }
        }
        if(!e)
            return false;
    }
    return true;
}

int main(){
    int n, k, sum = 0;
    cin >> n >> k;
    while(n--)
    {
        int s;
        cin >> s;
        if(ink(s, k)){
            sum++;
        }
    }
    cout << sum;
}