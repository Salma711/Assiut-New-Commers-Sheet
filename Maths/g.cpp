#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    long long a, sum = 0;
    cin >> a;
    for (int i = 1; i <= sqrt(a); i++){
        if(a%i == 0){
            if(a/i == i){
                sum += i;
            }
            else{
                sum += i + (a / i);
            } 
        }
    }
    cout << sum;
}