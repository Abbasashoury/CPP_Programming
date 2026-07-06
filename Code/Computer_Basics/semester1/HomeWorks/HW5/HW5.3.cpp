#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    for(int i = 0; i < 9; i++) {
        set<char> rows, cols, boxes;
        for(int j = 0; j < 9; j++) {
            // Check Rows
            if (board[i][j] != '.') {
                if (rows.find(board[i][j]) != rows.end()) return false;
                rows.insert(board[i][j]);
            }
            // Check Columns
            if (board[j][i] != '.') {
                if (cols.find(board[j][i]) != cols.end()) return false;
                cols.insert(board[j][i]);
            }
            // Check Boxes
            int boxRow = 3 * (i / 3), boxCol = 3 * (i % 3);
            if (board[boxRow + j / 3][boxCol + j % 3] != '.') {
                if (boxes.find(board[boxRow + j / 3][boxCol + j % 3]) != boxes.end()) return false;
                boxes.insert(board[boxRow + j / 3][boxCol + j % 3]);
            }
        }
    }
    return true;
}

int main() {
    vector<vector<char>> board(9, vector<char>(9));
    cout << "Enter Sudoku board:\n";
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            cin >> board[i][j];

    if (isValidSudoku(board))
        cout << "Valid\n";
    else
        cout << "Not Valid\n";

    return 0;
}
