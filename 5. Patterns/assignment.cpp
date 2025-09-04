#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // Q.1 Print the 0 - 1 Triangle Pattern:
    // 1
    // 01
    // 101
    // 0101
    // 10101

    // int n = 5;  // number of rows
    // for (int i = 1; i <= n; i++) {
    //     int start = (i % 2 == 0) ? 0 : 1; // even row starts with 0, odd with 1
    //     for (int j = 1; j <= i; j++) {
    //         cout << start;
    //         start = 1 - start; // flip between 0 and 1
    //     }
    //     cout << endl;
    // }

    // Logic to print space and * ::

  //  1  ----*        sp = 4   sp = n - i    |    * = 1    * = i+i - 1
  //  2  ---***       sp = 3   sp = n - i    |    * = 3    * = i+i - 1
  //  3  --*****      sp = 2   sp = n - i    |    * = 5    * = i+i - 1
  //  4  -*******     sp = 1   sp = n - i    |    * = 7    * = i+i - 1
  //  5  *********    sp = 0   sp = n - i    |    * = 9    * = i+i - 1

    int n = 1;
    // upper part of the diamond pattern

    for(int i = 1; i <= n; i++){
        // Spaces
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        
        for(int j = 1; j <= i+i - 1; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the diamond pattern

    // Logic ::
    //  5  *********    sp = 0   sp = n - i   |    * = 9    * = i + i - 1
    //  4  -*******     sp = 1   sp = n - i   |    * = 7    * = i + i - 1
    //  3  --*****      sp = 2   sp = n - i   |    * = 5    * = i + i - 1
    //  2  ---***       sp = 3   sp = n - i   |    * = 3    * = i + i - 1
    //  1  ----*        sp = 4   sp = n - i   |    * = 1    * = i + i - 1

    // bottom 
    for(int i = n; i >= 1; i--){
      // Space
      for(int j = 1; j <= n - i; j++){
        cout << " ";
      }
      
      // Stars
      for(int j = 1; j <= i+i - 1; j++){
        cout << "*";
      }
      cout << endl;
    }

    return 0;
}