#include <iostream>
#include <cmath>
#include <map>
using namespace std;
#define ll long long

int main(){
    std::multimap<int, int> m;
    int n, x, y;
    ll s;
    cin >> s >> n;
    while(n--)
    {
        cin >> x >> y;
        m.insert({x, y});
    }
    bool flag = true;
    for (const auto pair : m){
        if(s > pair.first){
            s += pair.second;
        }
        else{
            flag = false;
            break;
        }
    }
    flag ? cout << "YES" : cout << "NO";
}