#include <iostream>
using namespace std;
int search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }

    }
    return -1;
}
int main() {
    int arr[10]={5,7,8,10,-1,-4,9,2,6,10};
    int key;
    cin>>key;

    int index=search(arr,10,key);
    if(index!=-1){
        cout<<"Key is present at index "<<index<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }

    return 0;
}