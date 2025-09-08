#include <iostream>
using namespace std;

int main() {
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;

    cho = cho + a;            // Cho = A-> 65, a-> 32 so, cho = 97
    *ptr = *ptr + ch;         // *ptr -> a :: a + ch{97}So : 32 + 97 = 129   
    cout << a << ", " << ch << endl;
    return 0;
}