#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
#define ll long long
#define salma                          \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);

bool issorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++){
            if(arr[i] < arr[j]){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    salma;
    int n, x, y;
    cin >> n;
    int arr[n];
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr[i] = x;
        if(x != y){
            flag = true;
        }
    }
    if(flag)
    {
        cout << "rated";
    }
    else
    {
        if(issorted(arr, n)){
            cout << "maybe";
        }
        else{
            cout << "unrated";
        }
    }
}