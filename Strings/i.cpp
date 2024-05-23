#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int s = str.size(), n=0;
    for (int i = 0; i < s; i++)
    {
        if(str[i] != str[s-i-1]){
            n++;
        }
    }
    if(n == 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}