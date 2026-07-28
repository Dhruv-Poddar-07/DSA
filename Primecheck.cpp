// a prime number is a number which has two factors,one is number one and another is number itself

#include<iostream>
using namespace std;

void prime(int n){
    if(n < 2){
        cout<<"The number is not prime number";
        return;
    }
    int count = 0;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            count++;
            if(i != n/i) count++;
        }
    }
    if(count == 2) cout<<"The number is prime number";
    else cout<<"The number is not prime number";
}

int main(){
    int number;
    cout<<"Enter Number to Check: ";cin>>number;
    prime(number);
    return 0;
}