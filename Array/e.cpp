#include <iostream>
using namespace std; 

int main(){
    int n, l ,pos;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    l = arr[0], pos = 1;
    for(int i=1; i<n; i++){
        if(l>arr[i]){
            l = arr[i];
            pos = i+1;
        }
    }
    cout<<l<<" "<<pos;
}