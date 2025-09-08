// Q.2 Print the Rhombus pattern.
//            ---*****   
//            --*****
//            -*****
//            *****

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++){
        // For Space print
        for(int j = 1; j <= n-i; j++){
            cout << " ";
        }
        // For * printing
        for(int j = 1; j <= n; j++){
            cout << "*";
        }

        cout << endl;
    }
    
    return 0;
}