#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character: "<<endl;
    cin>>ch;
    if(ch>='a'){
        if(ch<='z'){
            cout<<"This is lowercase"<<endl;
        }
        else{
            cout<<"Special character"<<endl;
        }
    }
    else if(ch>='A'){
        if(ch<='Z'){
            cout<<"This is uppercase"<<endl;
        }
        else{
            cout<<"Special character";
        }
    }
    else if(ch>='0'){
        if(ch<='9'){
            cout<<"Numeric value"<<endl;
        }
        else{
            cout<<"Special character"<<endl;
        }
    }
}