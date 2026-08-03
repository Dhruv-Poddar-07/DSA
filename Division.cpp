//to print divisors

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printDivisor(int n){
    vector<int> divisors;
    
    for(int i = 1 ; i*i<=n ; i++){
        if(n%i==0){
            divisors.push_back(i);
            if(i != n/i) divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(), divisors.end());
    for(int d : divisors) cout << d << endl;

}
int main(){
    int n;

    cout<<"Enter Your Number: ";cin>>n;
    printDivisor(n);
    
    return 0;
}
