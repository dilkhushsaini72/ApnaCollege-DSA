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

    //    ****
    //   ****
    //  ****
    // ****

    int n = 9;
    double center = (n - 1) / 2.0;

    for(int i = 0;i < n; ++i){
        for(int j = 0; j < n; ++j){
            int d = max(abs(i - center), abs(j - center));
            cout << d + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}