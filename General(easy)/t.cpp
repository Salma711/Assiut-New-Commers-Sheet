#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    string s;
    cin >> s;
    int arr[4] ={0};
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])){
            arr[s[i] - '0' - 1]++;
        }
        else if(s[i] == '+'){
            arr[3]++;
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<arr[i]; j++){
            cout << i+1;
            if(arr[3] != 0){
                cout << "+";
                arr[3]--;
            }
        }
    }
}