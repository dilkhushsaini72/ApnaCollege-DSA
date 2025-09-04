#include <iostream>
using namespace std;

// n = 5 | 

// i = 1 | ----*****   sp = 4 :  sp = n - i;                                          
// i = 2 | ---*****    sp = 3 :  sp = n - i;                                          
// i = 3 | --*****     sp = 2 :  sp = n - i;                                         
// i = 4 | -*****      sp = 1 :                                         
// i = 5 | *****       sp = 0 :                                        

int main() {

    int n = 5;
    for(int i = 1; i <= n; i++){
        // space
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        
        // stars 
        for(int j = 1; j <= n; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}