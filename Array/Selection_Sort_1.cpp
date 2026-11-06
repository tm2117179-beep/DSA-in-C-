#include <iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex])
                minindex=j;
             
            
            
        }
        swap(arr[minindex],arr[i]);
    }
}

int main() {
    
    int arr[6]={2,1,4,3,7,4};
    
    selectionsort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}