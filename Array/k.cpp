#include <iostream>
using namespace std; 

int main(){
    int n, sum = 0;
    cin>>n;
    char a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i]-'0';
    }
    cout<<sum;
}