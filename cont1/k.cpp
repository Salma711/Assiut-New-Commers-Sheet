#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //freopen("And.in", "r", stdin);
    int n, m, k ;
    cin >> n >> m>> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>> arr[i];
    }
    for(int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n;j++){
            if(arr[j] > arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }
    for(int i = 0; i < m; i++){
        arr[k - 1]++;
    }
}