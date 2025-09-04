#include <iostream>
using namespace std;
// i = 1  |      1                            
// i = 2  |     212                   
// i = 3  |    32123                   
// i = 4  |   4321234                   
// i = 5  |  543212345                   
   

int main() {
    int n = 5;
    
     for(int i = 1; i <= n; i++){
        // space
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        
        // desending numbers
        for(int j = 1; j <= i; j++){
            cout << "";
        }
        cout << endl;
    }
    return 0;
}