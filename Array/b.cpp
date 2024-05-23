#include <iostream>
using namespace std; 

int main(){
    int n, x, pos = -1;
    cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>x;
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            pos = i;
            break;
        }
    }
    cout<<pos;
}