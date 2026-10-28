#include <iostream>
using namespace std;
int uniqueelement(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
    ans=ans^arr[i];
}
return ans;
}
int main() {
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }cout<<endl;
    cout<<uniqueelement(arr,size);
    
}