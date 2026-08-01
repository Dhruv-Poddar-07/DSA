#include <iostream>
using namespace std;

bool isPalindrome(string s, int left, int right){
    if (left >= right){
        return true;
    }
    else if(s[left] != s[right]) {
        return false;
    }
    else{
        return isPalindrome(s, left + 1, right - 1);
    }
}

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if(isPalindrome(s, 0, s.size() - 1)){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }

    return 0;
}