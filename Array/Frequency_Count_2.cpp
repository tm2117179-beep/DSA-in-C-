#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    cin>>n;
    for(int s=0;s<n;s++){
        cin>>arr[s];
    }
    for(int i=0;i<n;i++){
        int count=0;
        bool alreadycounted=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                alreadycounted=true;
                break;
            }
        }
        if(alreadycounted)
           continue;

        for(int k=0;k<n;k++){
            if(arr[i]==arr[k]){
            count++;
        }   

    }

    cout<<arr[i]<<"occurs"<<count<<"times"<<endl;
    }

    
    return 0;
 }
