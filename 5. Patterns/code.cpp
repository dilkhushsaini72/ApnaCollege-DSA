#include <iostream>
using namespace std;

int main() {
    // * * * *
    // * * * 
    // * * 
    // * 
 
    // int n = 6;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n-i+1; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // A 
    // B C
    // D E F
    // G H I J
    // int n = 4;
    // char ch = 'A';
    // for(int i = 1; i <= 4; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // Holo rectangle star patter
    // *****       
    // *   *     // n = 4;
    // *   *
    // *****
    int n = 4;
    for(int i = 1; i <= n; i++){
        cout << "*"; // First line::
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == n){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        
        cout << "*" << endl; // Last line::
    }
    
    return 0;
}
