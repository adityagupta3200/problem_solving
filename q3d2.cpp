/*
A
BB
CCC
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    char alpha = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<alpha;
        }
        alpha++;
        cout<<endl;
    }
    return 0;
}