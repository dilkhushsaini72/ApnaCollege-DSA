#include <iostream>
using namespace std;

bool checkDuplicate(int *arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                cout << arr[i] << ", " << arr[j];
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {1,2,3};
    int n = sizeof(arr) / sizeof(int);

    checkDuplicate(arr, n);    
    
    return 0;
}