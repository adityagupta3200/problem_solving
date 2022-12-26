#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    if(a > b){
        if(a>c){
            cout<<a<<" value is greater";
        }
        else{
            cout<<c<<" value is greater";
        }
    }
    else{
        if(c>b){
            cout<<c<<" value is greater";
        }
        else{
            cout<<b<<" value is greater";
        }
    }

    return 0;
}