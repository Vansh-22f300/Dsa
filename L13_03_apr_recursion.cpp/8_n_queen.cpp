#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool safehai(vector<vector<int>>& board, int i, int j, int n) {
        int oi = i;
        int oj = j;

        // Check upper-left diagonal
        while (i >= 0 && j >= 0) {
            if (board[i][j] == 1) return false;
            i--;
            j--;
        }

        // Check upper-right diagonal
        i = oi;
        j = oj;
        while (i >= 0 && j < n) {
            if (board[i][j] == 1) return false;
            i--;
            j++;
        }

        // Check same column
        i = oi;
        j = oj;
        for (int k = 0; k < i; k++) {
            if (board[k][j] == 1) return false;
        }

        return true;
    }

    bool nQueen(vector<vector<int>>& board, int n, int i) {
        // Base case: if all queens are placed
        if (i == n) {
            for (int x = 0; x < n; x++) {
                for (int y = 0; y < n; y++) {
                    cout << board[x][y] << " ";
                }
                cout << endl;
            }
            cout << endl;
            return true; // If you want only one solution, else false and remove this line
        }

        for (int j = 0; j < n; j++) {
            if (safehai(board, i, j, n)) {
                board[i][j] = 1;
                bool kyaplacehui = nQueen(board, n, i + 1);
                if (kyaplacehui) return true; // return false here if you want *all* solutions
                board[i][j] = 0; // backtrack
            }
        }

        return false;
    }

    void solveNQueens(int n) {
        vector<vector<int>> board(n, vector<int>(n, 0));
        nQueen(board, n, 0);
    }
};
