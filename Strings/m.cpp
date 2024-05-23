#include<iostream>
#include <string.h>
using namespace std;

// bool seq(string str) {
//     int j = 0;
//     string s = "hello", sa;
//     if(s.size() > str.size()){
//         return false;
//     }
//     for(int i = 0; i < 5; i++){
//         while(j < str.size()){
//             if(str[j] == s[i]){
//                 sa+=str[j];
//                 j++;
//                 break;
//             }
//             if(j == str.size()-1){
//                 return false;
//             }
//             j++;
//         }
//     }
//     if(sa == s){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
bool seq(string str){
    string val = "hello";
    int i=0, z=0;
    while(true){
        if(i == str.size() || z == val.size()){
            break;
        }
        if(str[i] == val[z]){
            z++;
        }
        i++;
    }
    if(z == val.size()){
        return true;
    }
    return false;
}
int main(){
    string str;
    cin>>str;
    if(seq(str)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
