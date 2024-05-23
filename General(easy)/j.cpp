#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool luck(int n){
    while (n != 0)
    {
        if (n % 10 != 4 && n % 10 != 7)
            return false;
        n /= 10;
    }
    return true;
}

bool islucky(int n)
{
    if (n % 4 == 0 || n % 7 == 0)
    {
        return true;
    }

    for(int i = 1; i < sqrt(n); i++){
        if(n%i == 0){
            if(luck(i)){
                return true;
            }
            if(luck(n/i)){
                return true;
            }
        }
    }
    // while (n != 0)
    // {
    //     if (n % 10 != 4 && n % 10 != 7)
    //         return false;
    //     n /= 10;
    // }
    return false;
}

int main()
{
    int n;
    cin >> n;
    islucky(n) ? cout << "YES" : cout << "NO";
}