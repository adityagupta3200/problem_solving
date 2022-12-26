/*
Pattern for N = 4
1
2 3
3 4 5
4 5 6 7
*/

#include<iostream>
using namespace std;

int main(){

    for(int i=1; i<=4; i++){
        int num = i;
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }
    return 0;
}