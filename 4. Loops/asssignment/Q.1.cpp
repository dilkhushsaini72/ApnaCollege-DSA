// Q.1 Print the 0-1 triangle pattern.
//               1
//               01
//               101
//               0101
//               10101
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){

        bool val = (i%2 == 0) ? 0 : 1;

        for(int j = 1; j <= i; j++){
            cout << val;
            val = !val;
        }
        cout << endl;
    }

    

    return 0;
}
