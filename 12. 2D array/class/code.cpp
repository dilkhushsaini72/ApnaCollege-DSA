#include <iostream>
using namespace std;

int main() {
    int students[3][4] = {
        {34,53,64,74},
        {1,2,3,4},
        {89,82,83,85}
    };

    cout << students[0][3] << endl; // 74
    cout << students[2][0] << endl;  // 89
    
    return 0;
}