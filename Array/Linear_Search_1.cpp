#include <iostream>
using namespace std;
bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        
        }
    }
    return 0;
}

int main() {
    int n;
    cin>>n;
    cout<<endl;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<endl;
    int key;
    cin>>key;
    bool found=search(arr,n,key);
    if(found){
        cout<<"Key is present";
    }
    else{
        cout<<"Key is absent";
    }

    return 0;
}