#include <iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Print First Element->"<<d.at(1)<<endl;
    cout<<"Front"<<d.front()<<endl;
    cout<<"Back"<<d.back()<<endl;

    cout<<"Empty or not->"<<d.empty()<<endl;

    // cout<<"Before erase->"<<d.size()<<endl;
    // d.erase(d.end(),d.end()+2);
    // cout<<"After erase"<<d.size()<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    

    return 0;
}