#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        int start=i-1;
        while(start){
            cout<<"*";
            start--;

        }
        int start2=i-1;
        while(start2){
            cout<<"*";
            start2--;

        }
        int start3=n-i+1;
        while(start3){
            cout<<start3;
            start3--;
        }
        cout<<endl;
        i++;          

        
    }

}