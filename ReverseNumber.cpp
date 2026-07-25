#include<iostream>
using namespace std;

int main(){
    int n;
    int revNum = 0;

    cout<<"Enter Number:";cin>>n;
    for(int i = 0; n>0;i++){
        int lastDigit = n%10;
        revNum = (revNum*10)+lastDigit;
        n=n/10;
    }

    cout<<"The reversed Number is: "<<revNum;
    return 0;
}