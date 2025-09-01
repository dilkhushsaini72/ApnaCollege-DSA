#include <iostream>
using namespace std;

int main() {
    //  for (int i = 1; i % 3 != 0 && i % 5 != 0; i++) {
    //     cout << i;
    //  }

    // cout << ((5 % 3 != 0 || 5 / 0 == 10));
    // cout << ((5 % 3 == 0 && 5 / 0 == 10));

    // Approach 1:::
    // cout << "Enter a number";
    // cin >> n;
    int n = 1000000;
    for (int i = 1; i <= n; i++){
        if(i%3 == 0 && i%5 == 0){
            cout << "Fizzbuz" << endl;
        }else if(i % 3 == 0){
            cout << "Fizz" << endl;
        }else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        }else{
            cout << i << endl;
        }
    }   

    // Approach 2::
    // cout << "Enter a number: ";
    // cin >> n;
    // int n = 1000000;
    // int counter3 = 0, counter5 = 0;

    // for(int i = 1; i <= n; i++){
    //     counter3++;
    //     counter5++;
    //     if(counter3 == 3 && counter5 == 5) {
    //         cout << "FizzBuzz" << endl;
    //         counter3 = 0;
    //         counter5 = 0;

    //     }else if(counter3 == 3) {
    //         cout << "Fizz" << endl;
    //         counter3 = 0;
    //     }else if(counter5 == 5){
    //         cout << "Buzz" << endl;
    //         counter5 = 0;
    //     }else{
    //         cout << i << endl;
    //     }
    // }
    
    return 0;
}