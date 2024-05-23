#include <iostream>
using namespace std;

int main()
{
    int in, y = 0, m = 0;
    cin>>in;
    while(in >= 365){
        y++;
        in-=365;
    }
    while(in >= 30){
        m++;
        in-=30;
    }
    cout<<y<<" "<<"years"<<endl<<m<<" "<<"months"<<endl<<in<<" "<<"days"<<endl;
}