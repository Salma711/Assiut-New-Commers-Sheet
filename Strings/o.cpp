#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n;
    char c;
    cin >> n;
    int count[26] = {0};
    for(int i=0; i<n; i++){
        cin >> c;
        count[int(c) - 97]++;
    }
    for(int i=0; i<26; i++){
        for(int j = 0; j < count[i]; j++){
            cout<<char('a'+i);
        }
    }
}