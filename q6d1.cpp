//Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a == b) && (b == c)){
        cout<<"Equilateral";
    }
    else if((a == b) || (b ==c) || (c == a)){
        cout<<"Isosceles";
    }
    else{
        cout<<"Scalene";
    }
    return 0;
}