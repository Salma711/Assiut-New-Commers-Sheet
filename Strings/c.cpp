#include<iostream>
#include <string.h>
using namespace std;

int main(){
    string x, y, cx, cy;
    cin >> x >> y; 
    // cx = x;
    // cy = y;
    int l1, l2;
    l1 = x.length();
    l2 = y.length();
    // if(l1 > l2){
    //     for(int i = 0; i < l1-l2; i++){
    //         cy += '0';
    //     }
    // }
    if(l2 > l1){
        // for(int i = 0; i < l2-l1; i++){
        //     cx += '0';
        // }
        l1 = l2;
    }
    for(int i = 0; i < l1; i++){
        if(int(x[i])<int(y[i])){
            cout<<x<<endl;
            exit(0);
        }
        if(int(x[i])>int(y[i])){
            cout<<y<<endl;
            exit(0);
        }
    }
    cout<<x<<endl;
}