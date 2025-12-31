#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printBoard(vetor<vector<char>> board) {
    int n = board.size();
}

int main() {
    vector<vector<char>> board;
    int n = 2;

    for(int i = 0; i<n; i++) {
        vector<char> newRow;
        for(int j=0; j<n; j++) {
            newRow.push_back('.');
        }
        board.push_back(newRow);
        
    }
    return 0;
}