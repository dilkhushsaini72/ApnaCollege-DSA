// reverse a arry without space 
// eg: {1,2,3,4,5,6}
//          ||
//     {6,5,4,3,2,1}
// swaping method *******


// #include <iostream>
// using namespace std;

// void reverseBySwap(int *arr, int n){

//     cout << "Original Array : ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << ", ";
//     }

//     cout << endl;
    
//     int start = 0, end = n - 1;
//     for(int i = 0; i < n; i++){
//         // swap(arr[start], arr[end]);
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//     }

//     cout << "Reversed Array : ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << ", ";
//     }
// }

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr) / sizeof(int);

//     reverseBySwap(arr, n);
    
//     return 0;
// }

// with space
// making a another copy of array :

#include <iostream>
using namespace std;

void reverByCpArr(int *arr, int n){
    int cpArr[n];
    int start = 0, end = n-1;

    for(int i = 0; i<n; i++){
        cpArr[start] = arr[end];
        start++;
        end--;
    }
    cout << "Original array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;

    cout << "Copy of array : ";
    for(int i = 0; i < n; i++){
        cout << cpArr[i] << ", ";
    }
    cout << endl;
    // Replace original array data by cp array;
    for(int i = 0; i < n; i++){
        arr[i] = cpArr[i];
    }

    cout << "Original array after replacing values: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << ", ";
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int); 

    reverByCpArr(arr, n);
    
    return 0;
}