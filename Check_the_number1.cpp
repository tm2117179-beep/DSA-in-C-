#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of a is: "<<endl;
    cin>>a;

    if(a>0){
        cout<<"A is positive"<<endl;
    }
    else if(a<0){
        cout<<"A is Negative"<<endl;
    }
    else{
        cout<<"A is zero"<<endl;
    }
}