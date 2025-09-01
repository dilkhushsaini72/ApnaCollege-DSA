// // // // // Q.1 write a c++ program to get a number from the user and print whether it's positve, negetive or zero.

// // // // #include <iostream>
// // // // using namespace std;

// // // // int main() {
// // // //     int num ;
// // // //     cout << "Enter a number : ";
// // // //     cin >> num;
// // // //     if(num == 0) {
// // // //         cout << num << " is zero";
// // // //     }else if (num > 0 ) {
// // // //         cout << num << " is a positive number";
// // // //     }else {
// // // //         cout << num << " is a negetive number";
// // // //     }
// // // //     return 0;
// // // // }

// // // // Q.2 write a C++ program that takes a year from the user and print whether that year is a leap year or not.
// // // #include <iostream>
// // // using namespace std;

// // // int main() {
// // //     int year ;
// // //     cout << "Enter a year :";
// // //     cin >> year;

// // //     if(year % 4 == 0){
// // //         cout << year << " is a leap year";
// // //     }else if(year % 400 == 0){
// // //         cout << year << " is a leap year";
// // //     }else if(year % 100 == 0){
// // //         cout << year << " is NOT a leap year";
// // //     }else{
// // //         cout << year << " is NOT a leap year";
// // //     }
    
// // //     return 0 ;
// // // }

// // // Q.3 What will be the value of x & y in the following program:
// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int a = 63, b = 36;
// //     bool x = (a < b) ? true : false;
// //     int y = (a > b) ? a : b;
// //     cout << x << "," << y << endl;
    
// //     return 0;
// // }

// // Q.4 What'll be the output of the program: 
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5;

//     if (++a*5 <= 25) {
//         cout << "hello \n";
//     }else{
//         cout << "Bye \n";
//     }

//     cout << (++a * 5);  // Expact 30 but comes 35 Why???
    
//     return 0 ;
// }

// Q.5 For any 3 digit number check whether it's an Armstrong number or not . 
// Armstrong number is a number that is equal to the sum of cubes of its digits.
// Eg: 371 : 3*3*3 + 7*7*7 + 1*1*1 = 27 + 343 + 1 = 371;
#include <iostream>
using namespace std;

int main() {
    int digit;
    cout << "Enter 3 digit number :";
    cin >> digit;
    int copy = digit;

    int dig1 = digit % 10;
    digit = digit / 10;

    int dig2 = digit % 10;
    digit = digit / 10;

    int dig3 = digit % 10;
    digit = digit / 10;

    int digSum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;
    cout << digSum << endl;
    if(digSum == copy){
        cout << copy << " is Armstronge";
    }else{
        cout << copy << " is Not Armstronge";
    }
    
   return 0 ;
}