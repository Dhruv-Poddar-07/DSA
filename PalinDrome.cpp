// any number whose reverse is same as original number is callded palindrome

#include<iostream>
using namespace std;

int main(){
    int n;
    int revNum = 0;

    cout<<"Enter Number:";cin>>n;
    int dup=n;
    for(int i = 0; n>0;i++){
        int lastDigit = n%10;
        revNum = (revNum*10)+lastDigit;
        n=n/10;
    }

    if(dup==revNum)cout<<"This is a palindrome Number";
    else cout<<"This is not a palindrome number";
    return 0;
}