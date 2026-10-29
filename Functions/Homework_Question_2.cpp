#include <iostream>
using namespace std;
int setbits(int a,int b){
    int count=0;
    int count1=0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a=a>>1;
        
    }
    while(b!=0){
        if(b&1){
            count1++;
        }
        b=b>>1;
    }
    return count+count1;
}
int main() {
    int a,b;
    cin>>a>>b;
    int ans=setbits(a,b);
    cout<<ans;
    
}