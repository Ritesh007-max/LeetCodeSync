class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = 0;
        int col = 0;

        while (row < 9 && col < 9) {

            char num = board[row][col];

            for (int i = 0; i < 9; i++) {

                if (i == row) {
                    continue;
                }

                if (num == board[i][col] && num != '.') {
                    return false;
                }
            }

            for (int j = 0; j < 9; j++) {

                if (j == col) {
                    continue;
                }

                if (num == board[row][j] && num != '.') {
                    return false;
                }
            }

            int startRow = (row / 3) * 3;
            int startCol = (col / 3) * 3;

            for (int r = startRow; r < startRow + 3; r++) {
                for (int c = startCol; c < startCol + 3; c++) {
                    if (r == row && c == col)
                        continue;

                    if (num == board[r][c] && num != '.') {
                        return false;
                    }
                }
            }

            col++;
            if (col == 9) {
                col = 0;
                row++;
            }
        }

        return true;
    }
};