#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for (int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        for (int k = 0; k <= 2*i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= 2 * i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}