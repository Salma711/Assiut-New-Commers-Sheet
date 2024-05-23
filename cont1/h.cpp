#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //freopen("Homework.in", "r", stdin);
    int n, sum = 0;
    cin >> n;
    int a[n], b[n], c[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    sort(c, c + n);
    for (int i = 0; i < n; i++){
        if (a[i] < b[i] && b[i] < c[i]){
            sum++;
        }
    }
    cout << sum;
}