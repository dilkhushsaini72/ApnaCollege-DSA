#include <iostream>
using namespace std;

void subArrFinder(int *arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            cout << j;
            // for(int k = i; k <= j; k++){
            //     cout << k;
            // }
            // cout << ", ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    subArrFinder(arr, n);
    
    return 0;
}