/*
Write a C program to read temperature in centigrade and display a suitable message according to
temperature state below : Go to the editor
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/

#include<iostream>
using namespace std;

int main(){
    int temp;
    cin>>temp;

    if(temp < 0){
        cout<<"Freezing weather";
    }
    else if(temp >= 0 && temp < 10){
        cout<<"Very Cold Weather";
    }
    else if(temp >= 10 && temp < 20){
        cout<<"Cold Weather";
    }
    else if(temp >= 20 && temp < 30){
        cout<<"Normal In Temp";
    }
    else if(temp >= 30 && temp < 40){
        cout<<"Its Hot";
    }
    else if(temp >= 40){
        cout<<"Its Very Hot";
    }
    else{
        cout<<"Wrong Input";
    }

    return 0;
}