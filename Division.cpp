#include<iostream>
using namespace std;

void printDivisor(int n){
    for(int i = 1 ; i<=n ; i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
}
int main(){
    int n;

    cout<<"Enter Your Number: ";cin>>n;
    printDivisor(n);

    return 0;
}