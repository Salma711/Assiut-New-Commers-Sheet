#include <iostream>
using namespace std; 

int main(){
    int n, m;
    cin>>n>>m;
    int a[n], b[m] = {0};
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[a[i] - 1]++;
    }
    for(int i=0; i<m; i++){
        cout<<b[i]<<endl;
    }
}