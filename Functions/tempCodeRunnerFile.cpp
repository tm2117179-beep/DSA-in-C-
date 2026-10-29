#include <iostream>
using namespace std;
int setbits(int a,int b){
    int count=0;
    int count1=0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a=a>>1;