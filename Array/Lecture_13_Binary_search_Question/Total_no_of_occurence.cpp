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
    int Even[6]={1,2,3,3,3,4};
    
    int first=Firstocc(Even,6,3);
    int last=Lastocc(Even,6,3);
    
    cout<<first<<endl;
    cout<<last<<endl;

    int total=(last-first)+1;
    cout<<total<<endl;

    
}