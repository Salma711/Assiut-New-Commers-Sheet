#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string e1 = "egypt";
    int count[5] = {0};
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == e1[0] || str[i] == e1[0] - 32){
            0[count]++;
        }
        else if(str[i] == e1[1] || str[i] == e1[1] - 32){
            1[count]++;
        }
        else if(str[i] == e1[2] || str[i] == e1[2] - 32){
            2[count]++;
        }
        else if(str[i] == e1[3] || str[i] == e1[3] - 32){
            3[count]++;
        }
        else if(str[i] == e1[4] || str[i] == e1[4] - 32){
            4[count]++;
        }
    }
    int n = count[0];
    for(int i=1; i<5; i++){
        n = min(n, count[i]);
    }
    cout<<n<<endl;
}
