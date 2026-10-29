#include <iostream>
using namespace std;
int arithmetic_Progression(int n){
        int ans=3*n+7;
        return ans;
    }
    

int main() {
    int a;
    cin>>a;
    int answer=arithmetic_Progression(a);
    cout<<answer<<endl;
    
}