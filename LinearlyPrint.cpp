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



//to print linear in reverse order
// void print(int i , int n){
//     if(i<1)return;
//     cout<<i<<endl;
//     i--;
//     print(i,n);
// }

// int main(){
//     int num;
//     cout<<"Enter Number: ";cin>>num;
//     print(num,num);
//     return 0; 
// }

