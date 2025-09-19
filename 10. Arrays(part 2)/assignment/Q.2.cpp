#include <iostream>
using namespace std;

int checkPresentOrNot(int *arr, int n, int target){
    int start = 0;
    while(start < n){
        if(arr[start] == target){
            return 1;
        }
        start++;
    }
    return -1;
}

int main() {
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr) / sizeof(int);

    int target = 1;
    cout << checkPresentOrNot(arr, n, target);
    
    return 0;
}