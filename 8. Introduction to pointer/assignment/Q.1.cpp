// Q.1 What will be the output of the following code:

#include <iostream>
using namespace std;

int main() {
    int x;
    int *ptr;
    x = 7;
    ptr = &x;
    cout << *ptr;      // 7

    //
    // int x = 7;
    // int *ptr = &x;
    
    return 0;
}