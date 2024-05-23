#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0, j = n - 1, x = 0;
    int a = 0, b = 0;
    while (i <= j)
    {
        if(x%2==0){
            if (arr[i] > arr[j]){
                a += arr[i];
                i++;
            }
            else{
                a += arr[j];
                j--;
            }
            x++;
        }
        else{
            if (arr[i] > arr[j])
            {
                b += arr[i];
                i++;
            }
            else
            {
                b += arr[j];
                j--;
            }
            x++;
        }
    }
    cout << a << " " << b;
}