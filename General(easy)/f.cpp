#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int c, r, x = 0;
    cin >> c >> r;
    for (int i = 0; i < c; i++){
        if(i % 2 == 0){
            for(int j = 0; j < r; j++){
                cout << "#";
            }
        }
        else if (x%2 == 0){
            for(int j = 0; j < r-1; j++){
                cout << ".";
            }
            cout << "#";
            x++;
        }
        else{
            cout << "#";
            for (int j = 0; j < r - 1; j++)
            {
                cout << ".";
            }
            x++;
        }
        cout << "\n";
    }
}