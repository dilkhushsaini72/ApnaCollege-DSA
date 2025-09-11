#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key){
    int start = 0, end = n - 1;

    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int key; 
    cout << "Enter a key to find in arr";
    cin >> key;
    int n = sizeof(arr) / sizeof(int);

    int idx = binarySearch(arr, n, key);
    
    if(idx == -1){
        cout << "your key is not in array";
    }else{
        cout << key << " is found on " << idx << " idx \n";

    }
    
    return 0;
}