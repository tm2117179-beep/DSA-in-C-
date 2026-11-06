#include <iostream>
using namespace std;
void Insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main() {
    int arr[6]{4,2,6,1,9,4};
    Insertionsort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}