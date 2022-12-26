#include<iostream>
using namespace std;

int main(){
    int bs, allow;
    char grade;
    cin>>bs>>grade;

    if(grade == 'A'){
        allow = 1700;
    }
    else if(grade == 'B'){
        allow = 1500;
    }
    else{
        allow = 1300;
    }

    int hra = bs*0.20;
    int da = bs*0.50;
    int pf = bs*0.11;

    int ts = bs + hra + da + allow - pf;
    cout<<"total salary is: "<<ts;

    return 0;
}