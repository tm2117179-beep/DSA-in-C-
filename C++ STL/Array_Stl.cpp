#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3]={1,2,3};
    cout<<basic[1]<<endl;
    cout<<sizeof(basic)/sizeof(basic[0])<<endl;
    array<int,4> a={1,2,3,4};

    int size=a.size();
    cout<<size<<endl;

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;


    }

    cout<<"Elements at 2nd index->"<<a.at(2)<<endl;
    cout<<"empty or not->"<<a.empty()<<endl;
    cout<<"First Element->"<<a.front()<<endl;
    cout<<"Last Element->"<<a.back()<<endl;


}