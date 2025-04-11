class Solution {
public:
    vector<vector<char>> ans;
    void solveSudoku(vector<vector<char>>& board) {
        int r = 0;
        int c = 0;
        func(r, c, board);
        board=ans;
    }

    void func(int r, int c, vector<vector<char>>& board) {
        
        if (c == 9) {
            r++;
            c=0;
        }
        if (r == 9) {
            ans=board;
            return;
        }
        if (board[r][c] != '.') {
            func(r, c + 1, board);
        } else {
            for (int i = 1; i <= 9; i++) {
                if (isValid(r, c, board, i)) {
                    board[r][c] = i + '0';
                    func(r, c + 1, board);
                    board[r][c] = '.';
                }
            }
        }
    }

    bool isValid(int r, int c, vector<vector<char>>& board, int num) {
        for (int i = 0; i < 9; i++) {
            if (board[r][i] == num + '0')
                return false;
            if (board[i][c] == num + '0')
                return false;
        }
        int str = (r / 3) * 3;
        int stc = (c / 3) * 3;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[str + i][stc + j] == num + '0')
                    return false;
            }
        }
        return true;
    }
};