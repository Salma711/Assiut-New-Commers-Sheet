#include<iostream>
#include <string.h>
using namespace std;

int main(){
    string a, b;
    int s1, s2;
    cin >> a >> b;
    s1 = a.size();
    s2 = b.size();
    cout<<s1<<" "<<s2<<endl;
    cout<<a+b<<endl;
    char c = a[0];
    a[0] = b[0];
    b[0] = c;
    cout<<a<<" "<<b<<endl;
}