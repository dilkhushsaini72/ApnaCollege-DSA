// Q.3 write a function which takes 2 numbers as parameters (a & b) and outputs : a^2 + b^2 + 2ab:
#include <iostream>
using namespace std;

int calExpression(int a, int b){
    int res = a*a + b*b + 2*a*b;
    return res;
}

int main() {
    int a,b;
    cout << "Enter the value for a and b: ";
    cin >> a >> b;

    cout << "Your result = " << calExpression(a,b);

    return 0;
}