#include <iostream>
using namespace std;

void binToDec(int binNum) {
    int n = binNum;
    int decNum = 0;
    int pow = 1;

    while( n != 0){
        int lastDig = n % 10;
        decNum += lastDig * pow;
        pow = pow * 2;
        n = n / 10;
    }
    cout << decNum << endl;
}

void decTobin(int decNum){
    int n = decNum;
    int binNum = 0;
    // int pow = 1;
    while(n != 0){
        int rem = n % 2;
        binNum = binNum + rem * 10;  
        // pow = pow * 10;
        n /= 2;
    }

    cout << binNum;
} 

int main() {
    
    decTobin(8);
    // binToDec(100);
    return 0;
}