#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        int num;
        num=n%10;
        cout<<num;
        n=n/10;
    }
}