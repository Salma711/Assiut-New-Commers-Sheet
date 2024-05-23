#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n, score = 0;
    string str;
    cin >> n>>str;
    for (int i = 0; i < n; i++)
    {

        if (str[i] == 'V')
        {
            score += 5;
        }
        else if (str[i] == 'W')
        {
            score += 2;
        }
        if (i < n - 1)
        {
            if (str[i] == 'X')
            {
                i++;
            }
            else if (str[i] == 'Y')
            {
                str += str[i+1];
                n++;
                i++;
            }
            else if (str[i] == 'Z')
            {
                if (str[i + 1] == 'V')
                {
                    score = score / 5;
                    i++;
                }
                else if (str[i + 1] == 'W')
                {
                    score = score / 2;
                    i++;
                }
            }
        }
    }
    cout << score;
}