/*
A
BC
CDE
DEFG
*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    
    for(int i=1; i<=row; i++){
        char alpha = 'A'+i-1;
        for(int j=1; j<=i; j++){
            cout<<alpha;
            alpha++;
        }
        cout<<endl;
    }

    return 0;
}