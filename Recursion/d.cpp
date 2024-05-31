#include <iostream>
using namespace std;

void print(long long n)
{
    if (n != 0)
    {
        print(n / 10);
    }
    else
    {
        return;
    }
    cout << n % 10 << " ";
}

int main()
{
    int x;
    long long n;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> n;
        if(n == 0)
        {
            cout << 0;
        }
        else
        {
            print(n);
        }
        cout << "\n";
    }
}