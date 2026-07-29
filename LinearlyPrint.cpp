#include <iostream>
using namespace std;

void print(int i , int n){
    if(i>n)return;
    cout<<i<<endl;
    i++;
    print(i,n);
}

int main(){
    int num;
    cout<<"Enter Number: ";cin>>num;
    print(1,num);
    return 0; 
}