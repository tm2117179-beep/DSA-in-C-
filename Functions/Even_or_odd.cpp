#include <iostream>
using namespace std;

bool isEven(int a){
    // a&1=1 iska matlab hai ki value odd hai 
    // a&1=0 iska matlab hai ki value even hai
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main() {
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }
    
    
}