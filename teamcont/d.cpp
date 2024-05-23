#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <vector>
#define ll long long
#include <iostream>

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int main(){
    int t;
    string str;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> str;
        for (int j = 0; j < str.size(); j++)
        {
            for(int k = j+1; k < str.size(); k++){
                if (str[j] == str[k]){
                    if (!isPrime(k - j)){
                        str.erase(j, 1);
                        j--;
                        break;
                    }
                }
            }
        }
        cout << str.size()<<"\n";
    }
    
}