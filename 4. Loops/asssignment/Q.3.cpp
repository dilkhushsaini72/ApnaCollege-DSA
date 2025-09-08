// Print the Palindromic Patterns with Numbers.
//                 ----1|
//                 ---21|2
//                 --321|23
//                 -4321|234
//                 54321|2345

#include <iostream>
using namespace std;

int main() {
    int n = 8;

    for(int i = 1; i <= n; i++){
        // space
        for(int j = 1; j <= n-i; j++){
            cout << " ";
        }

        // First half triangle 
        for(int j = i; j >= 1; j--){
            cout << j;
        }

        // second half triangle
        for(int j = 2; j <= i; j++){
            cout << j;
        }

        cout << endl;
        
    }
    
    return 0;
}