#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n], a[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        a[arr[i] - 1] = i+1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}