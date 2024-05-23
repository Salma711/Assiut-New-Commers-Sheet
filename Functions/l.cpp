#include <iostream>
using namespace std; 

void concat(int n, int a[], int b[], int c[]){
    int i, j, x;
    for(i = 0; i < n; i++){
        c[i] = b[i];
    }
    for(i = i, j = 0;  j < n; j++, i++){
        c[i] = a[j];
    }
}

int main(){
    int n;
    cin>>n;
    int a[n], b[n], c[2*n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    concat(n, a, b, c);
    for(int i=0; i<2*n; i++){
        cout<<c[i]<<" ";
    }

}