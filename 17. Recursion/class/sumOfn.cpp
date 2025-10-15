#include <iostream>
using namespace std;

int sumOfn(int n){
    if(n == 1){
        return 1;
    }

    return n + sumOfn(n-1);
}

int main() {
    cout << sumOfn(100);
    return 0;
}