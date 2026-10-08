#include<iostream>
using namespace std;
int main(){
    int n,num;
    num=2;
    cout<<"Enter the value of n: ";
    cin>>n;
    if(n<num){
        cout<<"Not prime"<<endl;
    }
    else{
        while(n>num){
            if(n%num==0){
                cout<<"not prime"<<endl;
                break;
            }    
            num=num+1;    
            
            else{
                cout<<"This number is prime "<<n<<endl;
                break;
            }
            

        }
    }
    
}