#include <iostream>
using namespace std;
#define ll long long

void print(int n, ll arr[]){
    if(n < 0){
        return;
    }
    else if (n%2 == 0){
        cout << arr[n] << " ";
    }
    print(n - 1, arr);
}

int main(){
    int n;
    cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    print(n - 1, arr);
}