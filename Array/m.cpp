#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = a[0], max = a[0];
    int minin = 0, maxin = 0;
    for(int i = 1; i < n; i++){
        if(a[i] > max){
            max = a[i];
            maxin = i;
        }
        else if (a[i] < min)
        {
            min = a[i];
            minin = i;
        }
    }
    swap(a[minin], a[maxin]);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}