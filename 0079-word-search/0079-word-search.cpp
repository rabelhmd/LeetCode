class Solution {
public:
    int row, col;
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    int vis[16][16];
    
    bool dfs(vector<vector<char>>& board, int x, int y, int pos, string& w, int& len) {
        if(pos == len) return true;
        if(x < 0 || y < 0 || x >= row || y >= col) return false;
        if(vis[x][y]) return false;
        if(board[x][y] != w[pos]) return false;
        
        vis[x][y] = true;
        int flag = false;
        for(int i = 0; i < 4; i++) {
            flag = dfs(board, x + dx[i], y + dy[i], pos + 1, w, len);
            if(flag) return true;
        }
        vis[x][y] = false;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        row = board.size(), col = board[0].size();
        int len = word.size();
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(board[i][j] == word[0]) {
                    if(dfs(board, i, j, 0, word, len)) {
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};