/*
Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant 
the coordinate point lies.
*/

#include<iostream>
using namespace std;

int main(){
    int x, y;
    cin>>x>>y;

    if(x == 0 && y == 0){
        cout<<"At Origin";
    }
    else if(x<0 && y<0){
        cout<<"3rd Quadrant";
    }
    else if(x>0 && y>0){
        cout<<"1st Quadrant";
    }
    else if(x>0 && y<0){
        cout<<"4th Quadrant";
    }
    else if(x<0 && y>0){
        cout<<"2nd Quadrant";
    }
    return 0;
}