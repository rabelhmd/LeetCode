class Solution {
public:
    
    bool isValid(vector<char> &b) {
        int counter = 0;
        set <char> St;
        for(auto c: b) {
            if(c != '.') {
                if(St.find(c) != St.end()) return false;
                St.insert(c);
            }
        }
        return true;
    }
    
    bool isValid2d(vector<vector<char>>& b) {
        int counter = 0;
        set <char> St;
        for(auto r: b) {
            for(auto c: r) {
                if(c != '.') {
                    if(St.find(c) != St.end()) return false;
                    St.insert(c);
                }
            }
        }
        return true;
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
    
    // void out(vector<vector<char>> g) {
    //     for(auto r: g) {
    //         for(auto c: r) {
    //             cout << c << " ";
    //         }
    //         cout << "\n";
    //     }
    // }
    
    bool isValidSudoku(vector<vector<char>> board) {
        
        for(int i = 0; i < 9; i++) {
            if(isValid(board[i]) == false) return false;
        }
        
        for(int i = 0; i < 9; i++) {
            vector<char> b(9);
            for(int j = 0; j < 9; j++) b[j] = board[j][i];
            if(isValid(b) == false) return false;
        }
        
        vector<vector<char>> g;
        
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                g = genGrid(i*3, i*3 + 3, j*3, j*3 + 3, board);
                if(!isValid2d(g)) return false;
            }
        }
        

        return true;
    }
};