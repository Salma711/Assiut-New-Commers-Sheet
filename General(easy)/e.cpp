#include <iostream>
using namespace std;

int main(){
    int n, p, q, x = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p >> q;
        if(q-p>=2){
            x++;
        }
    }
    cout << x;
}