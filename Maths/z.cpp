#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    float r, s;
    cin >> r >> s;
    if (0.5 * s * sqrt(2) <= r){
        cout << "Circle";
    }
    else if (0.5 * s >= r){
        cout << "Square";
    }
    else{
        cout << "Complex";
    }
}

// sq in a cir if 0.5*s*sqrt(2) <= r
// cir in a cir if 0.5*s >= r