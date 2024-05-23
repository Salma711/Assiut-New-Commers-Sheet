#include<iostream>
using namespace std;

int main(){
    int x;
    while(x!=1999){
        cin>>x;
        if(x==1999)
            cout<<"Correct"<<endl;
        else
            cout<<"Wrong"<<endl;
    }
}