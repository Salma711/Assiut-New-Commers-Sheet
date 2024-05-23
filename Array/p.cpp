#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    int n, sum = 0;
    bool f = true;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while(true){
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                arr[i] /= 2;
            }
            else
            {
                f = false;
                break;
            }
        }
        if(f)
            sum++;
        else
            break;
    }
    if(!f){
        cout << sum;
    }
}