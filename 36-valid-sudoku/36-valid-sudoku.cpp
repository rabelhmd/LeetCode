class Solution {
public:
    
    bool invalid1D(vector<char> &b) {
        unordered_set <char> St;
        for(auto c: b)
            if(c != '.') {
                if(St.find(c) != St.end()) return true;
                St.insert(c);
            }
        return false;
    }
    
    bool invalid2D(vector<vector<char>>& b) {
        unordered_set <char> St;
        for(auto r: b)
            for(auto c: r) 
                if(c != '.') {
                    if(St.find(c) != St.end()) return true;
                    St.insert(c);
                }
        return false;
    }
    
    vector<vector<char>> genGrid(int iStart, int iEnd, int jStart, int jEnd, vector<vector<char>>& board) {
        vector<vector<char>> grid;
        for(int i = iStart; i < iEnd; i++) {
            vector <char> v;
            for(int j = jStart; j < jEnd; j++) v.push_back(board[i][j]);
            grid.push_back(v);
        }
        return grid;
    }
    
    bool isValidSudoku(vector<vector<char>> board) {
        
        for(int i = 0; i < 9; i++) if(invalid1D(board[i])) return false;
        
        for(int i = 0; i < 9; i++) {
            vector<char> b(9);
            for(int j = 0; j < 9; j++) b[j] = board[j][i];
            if(invalid1D(b)) return false;
        }
        
        vector<vector<char>> g;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                g = genGrid(i*3, i*3 + 3, j*3, j*3 + 3, board);
                if(invalid2D(g)) return false;
            }
        }
        return true;
    }
};