#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int t[3] = {a, b, c};
    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            if(t[j]<t[i]){
                int temp = t[j];
                t[j] = t[i];
                t[i] = temp;
            }
        }
    }
    for(int i=0; i<3; i++){
        cout<<t[i]<<endl;
    }
    cout<<endl<<a<<endl<<b<<endl<<c<<endl;
}