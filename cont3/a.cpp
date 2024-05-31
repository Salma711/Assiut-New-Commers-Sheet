#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long
#define salma                          \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    salma;
    int n;
    cin >> n;
    while(n--){
        int x, y;
        cin >> x >> y;
        if(x == y)
            cout << "Square\n";
        else
            cout << "Rectangle\n";
    }
}