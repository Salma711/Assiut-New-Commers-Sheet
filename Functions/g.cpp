#include <iostream>
using namespace std;

int max(int n, int arr[]){
    int max = arr[0];
    for(int i = 1; i < n;i++){
        if(arr[i] > max){
            max = arr[i]; 
        }
    }
    return max;
}
int min(int n, int arr[]){
    int min = arr[0];
    for(int i = 1; i < n;i++){
        if(arr[i] < min){
            min = arr[i]; 
        }
    }
    return min;
}

void maxmin(int n, int arr[]){
    int temp;
    for(int i = 0; i < n;i++){
        if(arr[i] > arr[0]){
            temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;
        }
         if(arr[i] < arr[1]){
            temp = arr[1];
            arr[1] = arr[i];
            arr[i] = temp;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}