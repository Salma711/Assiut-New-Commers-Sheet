#include<iostream>
using namespace std;

int main(){
    int x, y;
    cin>>x;
    while(x>0){
        y = x%10;
        x = (x-y)/10;
    }
    if(y%2 ==0){
        cout<<"EVEN"<<endl;
    }
    else{
        cout<<"ODD"<<endl;
    }
}