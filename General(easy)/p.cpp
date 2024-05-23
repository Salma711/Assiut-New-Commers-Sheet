#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    int t, n, u = 0, s = 0, o = 0;
    cin >> t;
    while(t--){
        cin >> n;
        if(n > 0)
        {
            s += n;
        }
        else if (n < 0)
        {
            if(s == 0){
                u++;
            }
            else{
                s--;
            }
        }
    }
    cout << u;
}