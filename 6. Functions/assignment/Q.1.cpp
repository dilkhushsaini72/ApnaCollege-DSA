// Q.1 Write a function to check if a number is a palindrome in C++. 
#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int rev = 0;
    while(num != 0){
        int lastDig = num%10;
        rev = rev * 10 + lastDig;
        num /= 10;
    }
    return (original == rev);

}

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;
   if(isPalindrome(num)){
    cout << num << " is palindrome";
   }else{
    cout << num << " is NOT palindrome";
   }
    
    return 0;
}