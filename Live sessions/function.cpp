#include <iostream>
// #include <cmath>
using namespace std;

int largestOfNumber(int a, int b, int c){
    if(a > b && a > c){
        return a;
    }else if(b > a && b > c){
        return b;
    }else{
        return c;
    }
}

int expressCal(int a, int b){
    int expResult = a*a + b*b + 2*a*b;
    return expResult;
}

bool isPalindrome(int n){
  
}

int main() {
    // cout << largestOfNumber(3,6,2) << endl;
    // cout << expressCal(2,3);

    cout << max(34,23);
    return 0;
}