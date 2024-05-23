#include <iostream>
using namespace std; 

// void shift(int n, int x, int arr[]){
//     x = x%n;
//     int temp1, temp2 = arr[0];
//     for(int i=0; i<x; i++){
//         for(int j=0; j<n; j++){
//             if(i == n-1){
//                 arr[0] = temp2;
//             }
//             temp1 = temp2;
//             temp2= arr[i+1];
//             arr[i+1] = temp1;
//         }
//     }
// }

void shift(int n, int x, int arr[], int arr2[]){
    x = x%n;
    for(int i=0; i<n; i++){
        if(i+x>=n){
            arr2[i+x-n] = arr[i];
        }
        else{
            arr2[i+x] = arr[i];
        }
    }
}

int main(){
    int n, x;
    cin>>n>>x;
    int arr[n], arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    shift(n, x, arr, arr2);
    for(int i=0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
}