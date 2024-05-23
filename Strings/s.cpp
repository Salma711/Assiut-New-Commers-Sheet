#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string str;
    int arr[501] = {0};
    int n = 0, nr = 0;
    cin>>str;
    arr[n]++;
    for(int i=1; i<str.size(); i++){
        if(str[i] == 'L' && str[i-1] == 'L'){
            arr[n]++;
        }
        else if(str[i] == 'L' && str[i-1] == 'R'){
            arr[++n]++;
        } 
        else if(str[i] == 'R'){
            nr++;
            if(nr>arr[n]){
                
            }
        }
    }
    cout<<n+1<<endl;
    for(int i=0; i<n+1; i++){
        for(int j = 0; j <arr[i]; j++){
            cout<<"L";
        }
        for(int j = 0; j <arr[i]; j++){
            cout<<"R";
        }
        cout<<endl;
    }
}