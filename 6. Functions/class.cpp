// #include <iostream>
// using namespace std;

// // Q.1 Write a function to find the product of 2 numbers - a &I b
// int productOfTwoNumber(int a , int b) {
//    int product = a * b;
//    return product;
// }

// int main() {
//     cout << productOfTwoNumber(4, 2);

//     return 0;
// }

#include <iostream>
using namespace std;

int calFact(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
         fact = fact * i;
    }
    cout << fact << endl;
    
    return fact;
}

// Check a number is prime or not?
bool isPrime(int n) {
    if(n == 1){
        return false;
    }
    for(int i = 2; i <= n; i++){
        if(n%2 == 0){
            return false;
        }
    }

    return true;
}

int main() {

   cout << isPrime(23);
   
    return 0;
}