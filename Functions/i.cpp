#include <iostream>
#include <algorithm>
using namespace std;

void swaprow(int n, int x, int y, int *arr)
{
    for (int i = 0; i < n; i++){
        swap(*(arr + n * x + i), *(arr + n * y + i));
    }
}

void swapcol(int n, int x, int y, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        swap(*(arr + n * i + x), *(arr + n * i + y));
    }
}

void print(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << *(arr + i * n + j) << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    swaprow(n, x - 1, y - 1, (int *)arr);
    swapcol(n, x - 1, y - 1, (int*)arr);
    print(n, (int*)arr);
}
