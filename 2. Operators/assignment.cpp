// Q. What'll be the output of the following programs:

// A.

#include <iostream>
using namespace std;

int main() {
    // a}.
    // int x = 2, y = 5;
    // int exp1 = (x * y / x);// 5
    // int exp2 = (x * (y / x));// 4
    // cout << exp1 << ",";
    // cout << exp2 << "\n";

    // b}.
    // int x = 10, y = 5;
    // int exp1 = (y * (x / y + x / y)); // 20
    // int exp2 = (y * x / y + y * x / y); // 20
    // cout << exp1 << " ";
    // cout << exp2 << "\n";

    // c}.
    int x = 200, y = 50, z = 100;
    if(x > y && y > z) {
        cout << "hello " << endl ;
    }

    if(z > y && z < x) {
        cout << "C++ \n";
    }

    if((y+200) < x && ( y+150) < z) {
        cout << "Hello c++ \n";
    }

    if(y < x && cout << "hello")
    
    return 0 ;
}
