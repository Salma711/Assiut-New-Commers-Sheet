#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main(){
    freopen("route.in", "r", stdin);
    int n, m, count = 0;
    cin >> n >> m;
    string s[n];
    string str[m];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> str[i];
    }
    for(int i = 0; i < n; i++){
        if(s[i] == str[count]){
            cout << "Yes\n";
            count++;
        }
        else{
            cout << "No\n";
        }
    }
}

