#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, arr[100] = {0};
    arr[0] = 0;
    arr[1] = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[j] + arr[j + 1] << " ";
        }
        for (int j = i + 1; j >= 2; j--)
        {
            arr[j] = arr[j] + arr[j - 1];
        }
        cout << "\n";
    }
}
