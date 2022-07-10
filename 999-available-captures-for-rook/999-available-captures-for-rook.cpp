class Solution {
public:
    
    pair<int, int> getStart(vector<vector<char>>& board) {
        for(int i = 0; i < 8; i++)
            for(int j = 0; j < 8; j++)
                if(board[i][j] == 'R') return {i, j};
        return {0, 0};
    }
     
    int numRookCaptures(vector<vector<char>>& board) {
        pair <int, int> pr = getStart(board);
        int row = pr.first, col = pr.second, res = 0;
        
        int i = row, j = col;
        while(i >= 0 && board[i][j] != 'B') {
            if(board[i][j] == 'p') {
                res += 1; break;
            }
            i -= 1;
        }
        
        i = row, j = col;
        while(i < 8 && board[i][j] != 'B') {
            if(board[i][j] == 'p') {
                res += 1; break;
            }
            i += 1;
        }
        
        i = row, j = col;
        while(j >= 0 && board[i][j] != 'B') {
            if(board[i][j] == 'p') {
                res += 1; break;
            }
            j -= 1;
        }
        
        i = row, j = col;
        while(j < 8 && board[i][j] != 'B') {
            if(board[i][j] == 'p') {
                res += 1; break;
            }
            j += 1;
        }
        
        return res;
    }
};