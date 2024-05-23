#include <iostream>
using namespace std;

void shift(int n, int arr[]){
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] == 0){
            for(int j = i; j <n-1;j++){
                arr[j] = arr[j+1];
            }
            arr[n-1] = 0;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    shift(n, a);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}