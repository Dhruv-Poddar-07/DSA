// Armstrong number is a number whose digits on cube and then sum of those cubes gives the number itself
// for eg:- number is 134 so 1cube + 3cube + 4cube gives 134 as ans so it is a armstrong number

#include<iostream>
using namespace std;

int main(){
    int n;
    int total = 0;
    cout<<"Enter Number:";cin>>n;
    int dup = n;
    for(int i = 0; n>0;i++){
        int lastDigit = n%10;
        total += (lastDigit*lastDigit*lastDigit);
        n=n/10;
    }

    if (total == dup){
        cout<<"The given number is an Armstrong number!";
    }
    else{
        cout<<"The given number is not an armstrong number!";
    }
    return 0;
}