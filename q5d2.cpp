/*
E
DE
CDE
BCDE
ABCDE
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++){
        char alpha = 'A'+n-i;
        for(int j=1; j<=i; j++){
            cout<<alpha;
            alpha++;
        }
        cout<<"\n";
    }

    return 0;
}