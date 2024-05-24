#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void InsertSort(int List[], int size)
{
    for (int i = 1; i < size; ++i)
    {
        int key = List[i];
        int j = i - 1;
        while (j >= 0 && List[j] > key)
        {
            List[j + 1] = List[j];
            j--;
        }
        List[j + 1] = key;
    }
}

bool binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x){
            return true;
        }
        else if (arr[mid] > x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return false;
}

    int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, x;
    cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    // InsertSort(a, n);
    while (q--)
    {
        cin >> x;
        binarySearch(a, 0, n - 1, x) ? cout << "found\n" : cout << "not found\n";
    }
    
}