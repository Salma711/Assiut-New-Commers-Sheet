#include <iostream>
using namespace std; 

int main(){
    int n, sm, x = 1;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sm = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<sm){
            sm = arr[i];
            x = 1;
        }
        else if(arr[i]==sm){
            x++;
        }
    }
    if(x%2!=0){
        cout<<"Lucky"<<endl;
    }
    else{
        cout<<"Unlucky"<<endl;
    }
}