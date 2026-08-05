#include <iostream>
using namespace std;

void sort(int arr[] , int n){
    for(int i = 0; i<=n-1 ; i++){
        int min = i;
        for(int j  = 0 ; j<=n-1 ; j++){
            if(arr[j]<arr[min]){ min = j;}
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;

    cout<<"enter number of inputs: ";cin>>n;

    int arr[n];

    cout<<"Enter array: ";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    sort(arr,n);
    
    cout<<"Arranged Array:-";
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}