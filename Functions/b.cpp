#include <iostream>
using namespace std;

void Print(int n){
    for(int i = 1; i < n; i++){
        cout<<i<<" ";
    }
    cout<<n;
}
int main(){
    int n;
    cin>>n;
    Print(n);
}