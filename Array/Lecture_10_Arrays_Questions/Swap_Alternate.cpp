#include <iostream>
using namespace std;
void swapalternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(arr[i+1]<arr[n]){
            swap(arr[i],arr[i+1]);
        }
        
    }
} 

void printalternate(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }cout<<endl;
}
int main() {
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[5]={1,2,3,4,5};
    swapalternate(even,8);
    swapalternate(odd,5);

    printalternate(even,8);
    printalternate(odd,5);
    return 0;
}