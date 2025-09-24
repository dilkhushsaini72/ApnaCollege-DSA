#include <iostream>
#include <cstring>
using namespace std;

void toUppercase(char word[], int n){
    for(int i = 0; i < n; i++){
        char ch = word[i];
        if(ch >= 'A' && ch <= 'Z'){
            continue;
        }else{
            word[i] = ch - 'a' + 'A';
        }
    }

    cout << word << endl;
}

void toLowerCase(char word[], int n){
    for(int i = 0; i < n; i++){
        char ch = word[i];
        if(ch >= 'a' && ch <= 'z'){
            continue;
        }else{
            word[i] = ch - 'A' + 'a';
        }
    }

    cout << word << endl;
}

void reverse(char word[], int n){
    int start = 0, end = n-1;
    while(start < end){
        swap(word[start], word[end]);
        start++;
        end--;
    }

    cout << word << endl;
}

bool isPalindrome(char word[], int n){
    int start = 0, end = n-1;
    while(start < end){
        if(word[start] == word[end]){
            return true;
        }else{
            return false;
            start++, end--;
        }
    }
}

int main() {
    char word[] = "abac";

    toUppercase(word, strlen(word));
    toLowerCase(word, strlen(word));
    reverse(word, strlen(word));
    cout << isPalindrome(word, strlen(word));
    
    return 0;
}