#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int counts[100];
    int size=0;
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
        counts[size]=count;
        size++;
    }

    bool unique=true;
    for(int a=0;a<size;a++){
        for(int b=0;b<a;b++){
            if(counts[a]==counts[b]){
                unique=false;
                break;
            }
            
        }
        
        
    }
    if(unique){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    
    return 0;
}