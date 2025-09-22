#include <iostream>
using namespace std;

void print(int *arr, int n){
    
}

int main() {
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int n = 4;

   for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}