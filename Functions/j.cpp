#include <iostream>
using namespace std; 

float avg(int n, float arr[]){
    float avg = 0;
    for(int i = 0; i < n; i++){
        avg+=arr[i];
    }
    avg /= n;
    return avg;
}

int main(){
    int n;
    cin>>n;
    float arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    printf("%.7f", avg(n,arr));
}