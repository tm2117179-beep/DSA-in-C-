#include <iostream>
using namespace std;
int getmax(int num[],int n){
    int Max=INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>Max){
            Max=num[i];
        }
        

    }
    return Max;
}    
int getmin(int num[],int n){
    int Min=INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<Min){
            Min=num[i];
        }
    }
    return Min;
}

int main() {
    int size;
    cin>>size;
    
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"The maximum value is "<<getmax(num,size)<<endl;
    cout<<"The minimum value is "<<getmin(num,size);
    return 0;
}