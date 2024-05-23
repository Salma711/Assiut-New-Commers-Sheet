#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n, s,x;
    cin >> n >> s;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        sum1 += x;
    }
    for (int i = 0; i < s; i++)
    {
        cin >> x;
        sum2 += x;
    }
    if(sum1 == sum2){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}