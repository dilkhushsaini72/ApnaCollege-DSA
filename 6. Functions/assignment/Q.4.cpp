// Q.4 write a function that prints the largest of 3 numbers.
#include <iostream>
using namespace std;

// 1. Approach
void largestNumber(int a, int b, int c) {
    if(a > b && a > c){
        cout << a << " is largest";
    }else if( b > a && b > c){
        cout << b << " is largest";
    }else{
        cout << c << " is largest";
    }
}

// 2.Approach
void largestNumber2(int a, int b, int c){
    cout << "\nlargest = " << max(a,max(b,c));
}

int main() {
    int a,b,c;
    cout << "Enter three values: ";
    cin >> a >> b >> c;

    largestNumber(a,b,c);
    largestNumber2(a,b,c);

    return 0;
}