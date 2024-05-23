#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    string str;
    for (int i = 0; i < num; i++)
    {
        cin >> str;
        int s = str.size(), n = 0;
        for (int i = 0; i < s - 2; i++)
        {
            if (str.substr(i, 3) == "010" || str.substr(i, 3) == "101")
            {
                n++;
            }
        }
        if (n > 0)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }
}