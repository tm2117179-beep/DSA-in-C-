#include <iostream>
using namespace std;

int main() {
    int amount,notes;

    cout<<"Enter total amount:";
    cin>>amount;

    switch(1){
        case 1:
            notes=amount/100;
            cout<<"100 rupee notes="<<notes<<endl;
            amount=amount%100;

        case 2:
            notes=amount/50;
            cout<<"50 rupee notes="<<notes<<endl;
            amount=amount%50;

        case 3:
            notes=amount/20;
            cout<<"20 rupee notes="<<notes<<endl;
            amount=amount%20;

        case 4:
            notes=amount/1;
            cout<<"10 rupee notes="<<notes<<endl;
            
    
 
    }
      
    return 0;
}