#include <iostream>
using namespace std; 

int main(){
    int x, n; 
    long long sum, s;
    cin>>x;
    for(int i=0; i<x; i++){
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sum = arr[0] + arr[1] +1;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                s = arr[i] + arr[j] + j - i;
                if(s < sum){
                    sum = s;
                }
            }
        }
        cout<<sum<<endl;
    }
}