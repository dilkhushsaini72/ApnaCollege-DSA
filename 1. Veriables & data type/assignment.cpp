// Q1. In a program , input the side of a square. You have to output the area of the square.

// #include <iostream>
// using namespace std;

// int main() {

//     int side;
//     cout << "Enter the side of the square: ";
//     cin >> side;

//     int Area = side * side;
//     cout << "Area of the square : " << Area;
    
//     return 0;
// }

// Q2. Enter cost of 3 items from the user . You have to output the total cost of the items back to the user as their bill.

// #include <iostream>
// using namespace std;

// int main() {
//     float pencil, pen, eraser;

//     cout << "Enter price for pencil: ";
//     cin >> pencil;
    
//     cout << "Enter price for pen: ";
//     cin >> pen;

//     cout << "Enter price for eraser: ";
//     cin >> eraser;

//     float totalCost = pencil + pen + eraser;

//     cout << "your total bill amount is : " << totalCost;

//     return 0;
// }

// Q3. Build a Simple interest Calculator.
          // input: P,R,T :- principal, rate, time

// #include <iostream>
// using namespace std;

// int main() {
//     int P,R,T;
//     cout << "Enter the values of principal , rate, time: ";
//     cin >> P >> R >> T;

//     int result = (P*R*T)/100;
//     cout << "Your result is :" << result;

    
//     return 0;
// }

// Q4. Write a program to calculate the area of a circle.

#include <iostream>
using namespace std;

int main() {
    int radius;
    float PI = 3.14;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float areaOfCirle = PI*radius*radius;
    cout << "Area of the circle is : " << areaOfCirle;
    
    return 0;
}