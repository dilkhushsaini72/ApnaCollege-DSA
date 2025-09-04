// Q.2 Write a function to calculate the sum of digits of a number.
#include <iostream>
using namespace std;

int sumOfDigits(int num){
    int sum = 0;
    while(num != 0){
        int lastDig = num%10;
        sum += lastDig;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of " << n << " = " << sumOfDigits(n);
    return 0;
}