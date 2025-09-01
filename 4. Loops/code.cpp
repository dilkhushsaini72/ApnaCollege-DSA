#include <iostream>
using namespace std;

int main() {
    // Q. Print numbers from 1 to N
    // int n;
    // int sum = 0;
    // cout << "Enter a number: ";
    // cin >> n;
    // for(int i = 1; i <= n; i++){
    //     sum += i;
    //     cout << i << " ";
    // }

    // cout << "Sum : " << sum ;

    // Q. Print the sum of digits of a number using while loop.
    // int num = 10829;
    // int numSum = 0;
    // while(num > 0) {
    //     int lastDig = num%10;
    //     numSum = numSum + lastDig;
    //     num = num / 10;
    // }

    // cout << numSum << endl;

    // Q. WAP where user can keep entering numbers till they enter a multiple of 10..


    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // for(int i = 0; true  ; i++){
    //     if(n%10 == 0){
    //         cout << "multiple of 10 , Success";
    //         break;
    //     }else{
    //         cout << "Not multiple of 10! Enter again:";
    //         cin >> n;
    //     }

    // }

    // ? Q. Check if a number is prime or not.

    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPrime = true;
    for(int i = 2; i < n; i++){
        if(n%i != 0){
            isPrime = true;
            break;
        }else{
            isPrime = false;
        }
    }

    if(isPrime == true){
        cout << "Prime";
    }else{
        cout << "Non-Prime";
    }

    
    
    return 0;
}