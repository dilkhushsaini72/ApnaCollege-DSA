#include <iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ", ";
    }
}

void selectionSort(int *arr, int n){
    for(int i = 0; i < n-1; i++){
        int minIdx = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);
    }

    printArr(arr, n);
}

int main() {
    int arr[] = {2,5,7,1,4};
    int n = sizeof(arr) / sizeof(int);

    selectionSort(arr, n);
    return 0;
}