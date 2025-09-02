// Q.1 WAP to find the factorial of number entered by the user.
// #include <iostream>
// using namespace std;

// int main() {
//     int num ;
//     cout << "Enter a number : ";
//     cin >> num;
//     long long factorial = 1;
//     for(int i = 1;i <= num; i++) {
//         factorial = factorial * i;
//     }

//     cout << "Factorial of " << num << " is: " << factorial << endl;
    
//     return 0;
// }

// Q.2 WAP to print the multiplication table of a number , entered by the user.
// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     for(int i = 1; i <= 10; i++) {
//         cout << num << " X " << i << " = " << num*i << endl;
//     }

//     return 0;
// }

// Q.3 WAP to input a number and check whether the number is an armstronge number or not.
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int num;
//     int Sum = 0, len = 0;
//     cout << "Enter a number: ";
//     cin >> num;
    
//     // calculate the length of number
//     int cpNum = num;
//     while(cpNum != 0){
//        cpNum /= 10;
//         len++;
//     }
     
//     // Last digit finding 
//     cpNum = num;
//     while(cpNum != 0){
//         int lastDig = cpNum % 10;
//         Sum += pow(lastDig, len); 
//         cpNum /= 10;
//     }

//     if(Sum == num){
//         cout << num << " Armstronge ";
//     }else{
//         cout << num << " Not Armstronge ";
//     }
//     return 0;
// }

// Q.4 For a positive N, WAP that prints all the prime numbers from 2 to N.
// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cout << "Enter a number: (2 - N) ";
//     cin >> N;
//     for(int i = 2; i <= N; i++){

//         bool isPrime = true;
//         for(int j = 2; j * j <= i; j++){
//             if(i%j == 0){
//                 isPrime = false;
//                 break;
//             }

//         }

//         if(isPrime){
//             cout << i << " " ;
//         }
//     }
    
//     return 0;
// }

// Q.5 For a Positive N, WAP that prints the first N Fibonacci numbers
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter how many Fibonacci numbers to print: ";
    cin >> N;

    long long a = 0, b = 1; // first two Fibonacci numbers

    cout << "First " << N << " Fibonacci numbers: ";

    for (int i = 1; i <= N; i++) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }

    cout << endl;
    return 0;
}
