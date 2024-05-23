#include <iostream>
#include <string>
using namespace std;

int main(){
    string str, prev;
    int n, sum =0;
    cin >> n;
    cin >> str;
    sum++;
    for(int i=1; i<n; i++){
        prev = str;
        cin >> str;
        if(str!=prev){
            sum++;
        }
    }
    cout << sum;
}
