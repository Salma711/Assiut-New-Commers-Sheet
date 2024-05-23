#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int a, b, n = 0;
    cin >> a >> b;
    for(int i = 0; i < 100;i++){
        if (a * pow(3, i) > b* pow(2, i)){
            n = i;
            break;
        }
    }
    cout << n;
}