#include <iostream>
using namespace std; 

void swaprow(int n, int x, int y, int arr[][500]){
    int temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            temp = arr[i][x];
            arr[i][x] = arr[i][y];
            arr[i][y] = temp;
        }
    }
}

void print(int n, int x, int y, int arr[][500]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[j][i];
        }
    }
}

int main(){
    int n, x, y;
    cin>>n>>x>>y;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[j][i];
        }
    }
    swaprow(n, x, y, arr);
}
// x = 1 y = 2
//  5 * 3
//  0 1 2 3 4
//  2 2 2 2 2 0
//  (2 2 2 2 2) 1
//  (2 2 2 2 2) 2