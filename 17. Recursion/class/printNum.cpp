#include <iostream>
using namespace std;

void printNum(int n){
    if(n == 0){
        return;
    }else{
        cout << n << " ";
        printNum(n-1);
    }
}

int main() {
    
    printNum(6);
    return 0;
}