class Solution {
public:
    
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int row = img.size(), col = img[0].size();
        vector<vector<int>> ret(row, vector <int>(col));
        
        for(int r = 0; r < row; r++) {
            for(int c = 0; c < col; c++) {
                int sum = 0, count = 0;
                for(int x = -1; x <= 1; x++) {
                    for(int y = -1; y <= 1; y++) {
                        int dx = r + x;
                        int dy = c + y;
                        if(dx < 0 or dx >= row) continue;
                        if(dy < 0 or dy >= col) continue;
                        sum += img[dx][dy];
                        count += 1;
                    }
                }
                ret[r][c] = sum / count;
            }
        }
        return ret;
    }
};