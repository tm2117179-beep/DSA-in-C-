#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    vector<int> a(5,2);
    vector<int> last(a);
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;


    v.push_back(1);
    cout<<"Capacity->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity->"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity->"<<v.capacity()<<endl;
    cout<<"Size->"<<v.size()<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Elemen at 2nd index->"<<v.at(2)<<endl;
    cout<<"Elemen at 1st index->"<<v.at(1)<<endl;

    cout<<"front->"<<v.front()<<endl;
    cout<<"last->"<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size->"<<v.size()<<endl;
    v.clear();
    cout<<"after clear size->"<<v.size()<<endl;
    




}