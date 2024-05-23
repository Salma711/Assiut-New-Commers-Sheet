#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    float f;
    cin >> f;
    int n = f;
    if(f == n){
        cout << "int "<<n;
    }
    else{
        cout << "float " << n << " " << setprecision(3)<< f-n;
    }
}