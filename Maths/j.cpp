#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i = 2; i * i <= n;i++){
        int s = 0;
        while(n % i == 0){
            s++;
            n /= i;
        }
        if(s > 0){
            cout << "(" << i << "^" << s << ")";
        }
        if(n != 1 && s != 0){
            cout << "*";
        }
    }
    if(n > 1){
        cout << "(" << n << "^1)";
    }   
}