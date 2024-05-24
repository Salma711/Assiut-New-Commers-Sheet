#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    int k, s;
    cin >> k >> s;
    int cn = 0;
    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++){
            int z = s - x - y;
            if(z >= 0 && z <= k){
                cn++;
            }
        }
    }
    cout << cn;
}