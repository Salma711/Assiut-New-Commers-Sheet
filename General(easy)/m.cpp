#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void sort(int &x1, int &x2, int &x3)
{
    if(x1 < x2){
        swap(x1, x2);
    }
    if(x1 < x3){
        swap(x1, x3);
    }
    if(x2 < x3){
        swap(x2, x3);
    }
}

int main()
{
    int x1, x2, x3, dis;
    cin >> x1 >> x2 >> x3;
    sort(x1, x2, x3);
    dis = (x1 - x2) + (x2 - x3);
    cout << dis;
}