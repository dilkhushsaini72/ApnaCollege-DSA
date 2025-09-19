#include <iostream>
using namespace std;

bool isTwice(int *arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(i == j){
                continue;
            }
            if(arr[i] == arr[j]){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {1,2,3,1};
    int n = sizeof(arr) / sizeof(int);

    cout << isTwice(arr,n);
    
    return 0;
}