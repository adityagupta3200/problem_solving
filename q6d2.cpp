/*
Pattern for N=4.
   1
  232
 34543
4567654
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=n-i; j<0; j--){
            cout<<" ";
        }
        
        int num=i;
        for(int k=1; k<=i; k++){
            cout<<num;
            num++;
        }

        int num2 = i+i-2;
        for(int l=i; l>1; i--){
            cout<<num2;
            num2--;
        }
    }
    return 0;
}