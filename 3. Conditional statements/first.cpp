#include <iostream>
using namespace std;

int main() {
    // Practice Q. Print the largest of 2 numbers
    // int a,b;
    // cout << "Enter the two values ";
    // cin >> a >> b;
    // if(a>b) {
    //     cout << "A is greater ";
    // }else{
    //     cout << "B is greater";
    // }

    // ********Ternary operator*********
    // a > b ? cout << "a is greater" : cout << "b is greater";

    // Q.2 Prin a number is odd or Even
    // int num;
    // cout << "Enter the number: ";
    // cin >> num;
    // if(num%2 == 0){
    //     cout << "Even";
    // }else{
    //     cout << "Odd";
    // }
    
    // Q.3 Print the largest of 3 numbers 
    // int a,b,c;
    // cout << "Enter the three values";
    // cin >> a >> b >> c;
    // if(a>b && a> c) {
    //     cout << "a is largest" << endl;
    // }else if(b>c && b > a){
    //     cout << "b is largest" << endl;
    // }else{
    //     cout << "c is largest" << endl;

    // }

    // Switch statement

    int day;
    cout << "Enter the day: ";
    cin >> day;
    switch (day){
    case 1:cout << "Monday";
        break;
    case 2:cout << "Tuesday";
        break;
    case 3:cout << "Wednesday";
        break;
    case 4:cout << "Thursaday";
        break;
    case 5:cout << "Friday";
        break;
    case 6:cout << "Saturday";
        break;
    case 7:cout << "Sunday";
        break;
    default:cout << "invalide day entered";
        break;
    }
    return 0 ;
}

