class Solution {
public:
    
    bool isValid(vector<vector<char>>& board, int x1, int y1, int x2, int y2) {
        int counter = 0;
        set <char> St;
        for(int i = x1; i <= x2; i++) {
            for(int j = y1; j <= y2; j++) {
                if(board[i][j] != '.') {
                    if(St.find(board[i][j]) != St.end()) return false;
                    St.insert(board[i][j]);
                    //counter += 1;
                }
            }
        }
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i = 0; i < 9; i++) {
            if (!isValid(board, i, 0, i, 8)) return false;
            if (!isValid(board, 0, i, 8, i)) return false;
        }
        
        for (int i = 0; i < 3;i++)
            for(int j = 0; j < 3;j++)
                if (!isValid(board, i*3, j*3, i*3+2, j*3+2))
                    return false;
        return true;
    }
};