#include <iostream>
using namespace std;

int Add(int A, int B)
{
    return A + B;
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<Add(a, b)<<endl;
}