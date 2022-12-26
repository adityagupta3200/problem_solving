//check whether the year entered by the user is a leap year or not.

#include<iostream>
using namespace std;

int main(){
    int yr;
    cin>>yr;

    if((yr%4 == 0 && yr%100 != 0) || yr%400 == 0){
        cout<<"leap Year";
    }
    else{
        cout<<"Not A Leap Year";
    }

    return 0;
}