// // #include <iostream>
// // using namespace std;

// // int main() {

// //     int n;
// //     cout << "Enter the size of Arr: ";
// //     cin >> n;
// //     int arr[n];
// //     int len = sizeof(arr) / sizeof(int);

    
// //     for(int i = 0; i < len; i++){
// //         cin >> arr[i];
// //     }
// //     for(int i = 0; i < len; i++){
// //         cout << arr[i] << " ";
// //     }
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {5, 4, 3, 9, 12};
//     int n = sizeof(arr) / sizeof(int);
//     int max = arr[0];
//     int min = arr[0];

//     for(int i = 0; i < n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//         if(arr[i] < min){
//             min = arr[i];
//         }
//     }

//     cout << "smallest number : " << min << endl;;
//     cout << "largest number : " << max << endl;
    
//     return 0;
// }


// Linear Search

#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key){
    for(int i = 0; i < n; i++) {
        if(arr[i] == key){
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[8] = {2, 5, 6, 7, 10, 14, 18, 20};
    
    int n = sizeof(arr) / sizeof(int);
    cout << *arr << endl;   // arr[0] = 2
    cout << arr << endl;    // 0x......

    cout << "Idx is = " << linearSearch(arr, n, 20);
    return 0;
}