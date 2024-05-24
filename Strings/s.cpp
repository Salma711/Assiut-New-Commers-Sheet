#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    string arr[1000];
    cin >> str;
    int n = 0;
    int l = 0, r = 0;
    string word;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'L')
            l++;
        else
            r++;
        word += str[i];
        if (l == r)
        {
            arr[n++] = word;
            l = r = 0;
            word.clear();
        }
    }
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << "\n";
    }
}