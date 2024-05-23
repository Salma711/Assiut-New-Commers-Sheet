#include <iostream>
using namespace std; 

int distinct(int n, int arr[]){
    int d = 0;
    int a[n];
    for(int i=0; i<n; i++){
        bool ndis = false;
        for(int j=0; j<d; j++){
            if(a[j] == arr[i]){
                ndis = true;
                break;
            }
        }
        if(!ndis)
            a[d++]=arr[i];
    }
    return d;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d = distinct(n, arr);
    cout<<d<<endl;
}