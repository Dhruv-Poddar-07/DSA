// basic recursion practice by calling a func again for use
#include <iostream>
using namespace std;

void f(int i,int n){
    if(i>n) return; // if a user enters the number of time to be printed as 0
    cout<<"Dhruv"<<endl;
    f(i+1,n);
}

int main(){
    int num;
    cout<<"Enter Number of times: ";cin>>num;
    f(1,num);
    return 0;
}



