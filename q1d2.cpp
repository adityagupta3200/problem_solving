/*
1
23
345
4567
*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;

    for(int i=1; i<=row; i++){
        int num = i;
        for(int j=1; j<=i; j++){
            cout<<num;
            num++;
        }
        cout<<"\n";
    }
    return 0;
}