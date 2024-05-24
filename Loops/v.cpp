#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= 4*n; i++)
    {
        if(i%4 == 0)
        {
            cout << "PUM\n";
        }
        else{
            cout << i << " ";
        }
    }
}