#include <iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;

        }
        mid=start+(end-start)/2;

    }
    return -1;

}

int main() {
    int even[6]={1,2,3,4,5,6,};
    int odd[5]={1,2,3,4,5};
    
    int evenIndex=BinarySearch(even,6,6);
    cout<<evenIndex<<endl;
    int oddIndex=BinarySearch(odd,5,3);
    cout<<oddIndex;
}    
