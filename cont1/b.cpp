#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    //freopen("Homework.in", "r", stdin);
    int n, q, t, a, b;
    cin >> n;
    string str;
    cin >> str;
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> t >> a >> b;
        if(t == 1){
            swap(str[a - 1], str[b-1]);
        }
        else if(t == 2){
            for (int i = 0; i < n; i++){
                swap(str[i], str[i + n]);
            }
        }
    }
    cout << str;
}