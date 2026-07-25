#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number:";cin>>n;
    for(int i = 0; n>0;i++){
        int lastDigit = n%10;
        cout<<lastDigit<<endl;
        n=n/10;
    }
    return 0;
}