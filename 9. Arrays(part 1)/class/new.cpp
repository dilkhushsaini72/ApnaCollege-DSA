#include <iostream>
#include <string>
#include <vector>
using namespace std;

int maxNum(int *arr, int n) {
    int max = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > max){
            max = arr[i];
        }
    }
   return max;

}

int main() {
    int arr[] = {2,5,6,1,3,8};
    int n = sizeof(arr) / sizeof(int);

    cout << maxNum(arr, n) << endl;
   
    return 0;
}