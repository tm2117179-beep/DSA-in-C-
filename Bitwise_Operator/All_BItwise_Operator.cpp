#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;

    cout<<" a&b " << (a&b) << endl;
    cout<<" a|b "  << (a|b) << endl;
    cout<<" ~a "  << (~a)  << endl;
    cout<<" a^b "  << (a^b) << endl;

    cout<<"The Right shift is "<< (17 >> 1) <<endl;
    cout<<"The Right shift is "<< (17 >> 2) <<endl;
    cout<<"The left shift is "<< (19 << 1) <<endl;
    cout<<"The left shift is "<< (21 << 2) <<endl;
}