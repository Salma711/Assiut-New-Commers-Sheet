#include <iostream>
using namespace std;
# define ll long long

int main(){
    int n;
    ll x, d, di = 0;
    char c;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> c >> d;
        if(c == '+'){
            x += d;
        }
        else if(c == '-'){
            if(x-d>=0){
                x -= d;
            }
            else{
                di++;
            }
        }
    }
    cout << x << " " << di;
}