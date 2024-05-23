#include <iostream>
using namespace std; 

int main(){
    int n;
    long long sum = 0;
    cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    (sum>0)? sum = sum: sum = 0-sum;
    cout<<sum<<endl;
}