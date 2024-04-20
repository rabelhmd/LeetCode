class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int row = land.size(), col = land[0].size();
        
        vector<vector<int>> ret;
        for(int i = 0; i < row; i++) {
            for(int j = 0; j< col; j++) {
                if(land[i][j] == 0) continue;

                int c1 = j, r2 = i;
                while(c1 < col && land[i][c1] == 1) c1++;
                while(r2 < row && land[r2][j] == 1) r2++;
                
                c1 = c1 == 0 ? c1 : c1-1;
                r2 = r2 == 0 ? r2 : r2-1;
                ret.push_back({i, j, r2, c1});
                
                for(int k = i; k <= r2; k++)
                    for(int l = j; l <= c1; l++) land[k][l] = 0;
            }
        }
        return ret;
    }
};
