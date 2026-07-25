#include<iostream>
using namespace std;

int main(){
    int n;
    int count=0;
    cout<<"Enter Number:";cin>>n;
    for(int i = 0; n>0;i++){
        int lastDigit = n%10;
        count = count +1;
        n=n/10;
    }
    cout<<"Number of Digits are: "<<count;
    return 0;
}