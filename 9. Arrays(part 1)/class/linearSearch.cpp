#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key){
    int st = 0, end = n-1;
    while(st < end){
        if(arr[st] == key){
            return st;
        }
        st++;
    }

}

int main() {
    int arr[] = {3,6,2,7,5,8};
    int n = sizeof(arr) / sizeof(int);
    
    cout << linearSearch(arr, n, 1) << endl;
    return 0;
}