#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <vector>
#define ll long long
#include <iostream>

// ll binaryToDecimal(string str)
// {
//     ll dec_num = 0;
//     ll power = 0;
//     int n = str.length();

//     for (int i = n - 1; i >= 0; i--)
//     {

//         if (str[i] == '1')
//         {
//             dec_num += (1LL << power);
//             dec_num %= 5;
//         }
//         power++;
//     }

//     return dec_num;
// }

int main()
{
    int sum = 0, count = 0;
    string str;
    cin >> str;
    for (int i = 0; i <str.size(); i++)
    {
        sum = sum * 2 + (str[i] - '0');
        sum %= 5;
        if(sum == 0){
            count++;
        }
    }
    cout << count;
}


