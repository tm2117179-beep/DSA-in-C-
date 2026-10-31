#include <iostream>
using namespace std;

int main() {
    int n=6;
    int m=4;
    int i=0,j=0;
    int arr1[100]={1,2,2,2,3,4};
    int arr2[100]={2,2,3,4};
    while(i<n&&j<m){
        
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                
                i++;
                j++;
            }
            else if(arr1[i]<arr2[j]){
                i++;
            }
            else{
                j++;
            }
            
    }
    

    
}