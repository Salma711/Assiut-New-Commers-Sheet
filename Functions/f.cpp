#include <iostream>
using namespace std;

long long eq(int x, int n)
{
    long long s = 1;
    long long sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        for(int j = 0; j < i; j++){
            s=s*x;
        }
        sum+=s;
        s = 1;
    }
    return sum;
}

int main()
{
    int x, n;
    cin >> x >> n;
    long long sum = eq(x, n);
    cout<<sum<<endl;
}