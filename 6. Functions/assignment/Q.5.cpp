// Q.5 Write a function that accepts a character as parameter & returns the character that occurs after ch in the English alphabet.
// NOTE: for z return a

#include <iostream>
using namespace std;

char increamentChar(char ch){
    if(ch == 'z'){
        return 'a';
    }
    return ++ch;
}

int main() {
    
    char ch = 'd';
    cout << increamentChar(ch);
    return 0;
}