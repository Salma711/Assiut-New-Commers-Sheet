#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main(){
    float x1, y1, x2, y2, x3, y3, x4, y4;
    float cx1, cy1, cx2, cy2;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    cx1 = (x1 + x2) / 2;
    cy1 = (y1 + y2) / 2;
    cx2 = (x3 + x4) / 2;
    cy2 = (y3 + y4) / 2;
    float r1 = sqrt(pow(cx1 - x1, 2) + pow(cy1 - y1, 2));
    float r2 = sqrt(pow(cx2 - x3, 2) + pow(cy2 - y3, 2));
    float d = sqrt(pow(cx2 - cx1, 2) + pow(cy2 - cy1, 2));
    if(d <= r1 + r2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}