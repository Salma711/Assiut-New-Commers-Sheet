#include <iostream>
#include<bits/stdc++.h>
#include <string.h>
using namespace std;

// string sort(string str, int l, int r, int size){
//     string s = str.substr(l, r-l+1);
//     sort(s.begin(), s.end());
//     return str.substr(0, l)+ s+ str.substr(r+1, size-(r-l+1));
// }
// string reverse(string str, int l, int r, int size){
//     string s;
//     for(int i=l+r; i>=l; i--){
//         s += str[i];
//     }
//     return str.substr(0, l)+ s+ str.substr(r+1, size-(r-l+1));
// }
int main()
{
    int s, n;
    string str;
    cin >> s >> n;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        string fun;
        int l, r;
        cin >> fun;
        if (fun == "pop_back")
        {
            if(s >0){
                str.pop_back();
                s--;
            }
        }
        else if (fun == "front")
        {
            if(s>0){
                cout << str.front() << endl;
            }
        }
        else if (fun == "back")
        {
            if(s>0){
                cout << str.back() << endl;
            }
        }
        else if (fun == "sort")
        {
            cin>>l>>r;
            if(s >= r && s >= l && l >= 1 && s >= 1){
                sort(str.begin() + min(l, r) - 1, str.begin() + max(l, r));
            }
        }
        else if (fun == "reverse")
        {
            cin>>l>>r;
            if(s >= r && s >= l && l >= 1 && s >= 1){
                reverse(str.begin() + min(l, r) - 1, str.begin() + max(l, r));
            }
        }
        else if (fun == "print")
        {
            cin>>l;
            if(s >= l && l >= 1){
                cout<<str.at(l-1)<<endl;
            }
        }
        else if (fun == "substr")
        {
            cin>>l>>r;
            if(s >= r && s >= l && l >= 1 && s >= 1){
                cout<<str.substr(min(l, r)-1, max(l, r)-min(l, r)+1)<<endl;
            }
        }
        else if (fun == "push_back")
        {
            char c;
            cin>>c;
            str.push_back(c);
            s++;
        }
    }
}
