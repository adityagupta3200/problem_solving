//check whether an alphabet entered by the user is a vowel or a consonant.

#include<iostream>
using namespace std;

int main(){
    char val;
    cin>>val;

    if(val == 'a' && val == 'e' && val == 'i' && val == 'o' && val == 'u' && val == 'A' && val == 'E' && val == 'I' && val == 'O' && val == 'U'){
        cout<<"vowel"<<endl;
    }
    else{
        cout<<"consonent"<<endl;
    }
    return 0;
}