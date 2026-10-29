#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,5,2,7,2,5};
    int n=6;
    
    for (int i=0;i<n;i++){
        int count=0;
        bool alreadycounted = false;

        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                alreadycounted=true;
                break;
            }
        }
        if(alreadycounted)
           continue;

        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            
        }   
        cout<<arr[i]<<"occurs"<<count<<"times"<<endl;
    }
    return 0;
}