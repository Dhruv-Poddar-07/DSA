#include <iostream>
using namespace std;

void sumofNnaturalNumbers(int i, int sum){
    if(i>1){
        cout<<sum;
    }else{
        cout<<"Enter number greater than zero";
        return;
    }
    sumofNnaturalNumbers(i-1,sum+i);
}

int main(){
    int n;
    cout<<"Enter Number to get the sum: ";cin>>n;
    sumofNnaturalNumbers(n,0);
    return 0;
}