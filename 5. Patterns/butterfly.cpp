#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 1; i <= n; i++){
        // first triangle stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        // cout << endl;
        for(int j = 1; j <= n-(i+i)+4; j++){
            cout << " ";
        }
        // cout << endl;
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    // lower
    for(int i = n; i <= n; i++){
        // first triangle stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        // cout << endl;
        for(int j = 1; j <= n-(i+i)+4; j++){
            cout << " ";
        }
        // cout << endl;
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}