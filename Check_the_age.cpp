#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the value of age: "<<endl;
    cin>>age;

    if(age>50){
        cout<<"You are old. "<<endl;
    }
    else if(age<20){
        cout<<"You are in bachpan. "<<endl;
    }
    else{
        cout<<"You are jawan and tagda. "<<endl;
    }
}