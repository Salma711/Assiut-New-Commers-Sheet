#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main(){
    freopen("Scores.in", "r", stdin);
    int n, k, m, s = 0, temp;
    cin >> n >> k >> m;
    for(int i=0; i<n-1; i++)
    {
        cin >> temp;
        s += temp;
    }
    temp = n * m - s;
    if(temp < 0){
        cout << 0;
    }
    else if(temp > k){
        cout << -1;
    }
    else{
        cout << temp;
    }
}