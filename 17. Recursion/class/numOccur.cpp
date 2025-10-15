#include <iostream>
#include <vector>
using namespace std;

int firstOccur(vector<int> arr,int i, int target){
    if(i == arr.size()){
        return -1;
    }
    
    if(arr[i] == target){
        return i;
    }

    return firstOccur(arr,i+1,target);
}

int lastOccur(vector<int> arr,int i, int target){

    if(i == arr.size()){
        return -1;
    }
    
    int foundIdx = lastOccur(arr,i+1,target);

    if(foundIdx == -1 && arr[i] == target){
        return i;
    }

    return foundIdx;
}

int main() {
    
    vector<int> arr = {1,2,3,3,3,4};
    cout << "first Occure: " << firstOccur(arr,0,3) << endl;   
    cout << "last Occure: " << lastOccur(arr,0,3) << endl;   
    return 0;
}