#include <iostream>
using namespace std; 

int main(){
    int n, x = 1;
    cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[n-i-1]){
            x = 0;
        }
    }
    if(x==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}