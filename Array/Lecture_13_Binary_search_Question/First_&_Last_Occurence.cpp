#include <iostream>
using namespace std;
int Firstocc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            e=mid-1;

        }
        else if(key>arr[mid]){
            s=mid+1;

        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;

        
    }
    return ans;

}    
   
    
int Lastocc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            s=mid+1;

        }
        else if(key>arr[mid]){
            s=mid+1;

        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;

        
    }
    return ans;
   
}
     

    
int main() {
    int Even[5]={1,2,3,3,4};
    
    cout<<Firstocc(Even,5,3)<<endl;;
    cout<<Lastocc(Even,5,3);

    
    
}