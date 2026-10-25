#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin>>n;
    int digit;
    int ans=0;
    while(n!=0){
        if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
            cout<<0;
            break;
        }
        digit=n%10;
        ans=(ans*10)+digit;
        n=n/10;

    }
    cout<<ans<<endl;;
    return 0;
}