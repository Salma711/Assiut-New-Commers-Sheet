#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    int count[26] = {0};
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        count[s[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(count[i] != 0){
            cout<<char('a'+i)<<" : "<<count[i]<<endl;
        }
    }
}