#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    //freopen("Square.in", "r", stdin);
    int n , k = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        k++;
         for(int j = i+1; j <= n; j++){
             if (static_cast<int>(sqrt(i * j)) == sqrt(i * j)){
                 k += 2;
             }
         }
    }
    std::cout << k;
}