#include <iostream>
using namespace std;

int main() {
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;

    cho = cho + a;            // Cho = A-> 65 and a-> 32 so, 65 + 32 = 97
    *ptr = *ptr + ch;         // *ptr -> a :: a + ch{97}So : 32 + 97 = 129   
    cout << a << ", " << ch << endl; // Now we have to print a = 129 and ch = 97 -> a 
    return 0;
}