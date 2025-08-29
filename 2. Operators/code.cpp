#include <iostream>
using namespace std;

int main() {
     // constant in C++

    //  const int marks = 23;
    //  const float PI = 3.14;

     // Type Casting in C++ :- converting data type from one to another
     // bool -> char -> int -> float -> double::: Implicit conversion

    //  float PI = 3.14;
    //  cout << (int) PI << endl; // Implicit float-> int
    //  cout << ('A' + 3) << endl; // Implicit
    //  cout << char('A' + 3) << endl; // Explicite

     //Q. 
     cout << (bool)3+2; // 3 is converted into 1 by explicit conv. and then 1+2 = 3
     cout << (bool) (3+2); // 3+2 = 5 after five will converted into boolean value = 1 ;
     ///  bool 0 = 0
     ///  bool 1,2,..n = 1 Only bool 0 is zero else bool is 1  

    
    return 0 ;
}