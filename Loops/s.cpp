#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    int a, b, t;
    cin >> t;
    while(t--)
    {
        int sum = 0;
        cin >> a >> b;
        if(a > b){
            swap(a, b);
        }
        for (int i = a + 1; i < b; i++){
            if(i % 2 != 0)
                sum += i;
        }
        cout << sum << "\n";
    }
}