/*
  primitive : 
             1] integer(int) 4 Bytes
             2] Character(char) 1 Byte
             3] Boolean(bool) 1 Byte
             4] Floating Point(float) 4 Bytes
             5] Double FP (double) 8 Bytes

   Non-Primitives:
             1] String
             2] Array          


*/

#include <iostream>
using namespace std;

int main() {
    int number = 34;
    char ch = 'A';
    bool isAdult = true;
    float pi = 3.14;
    double price = 999.23;


    cout << number << endl;
    cout << ch << endl;
    cout << isAdult << endl;
    cout << pi << endl;
    cout << price << endl;
    return 0;
}