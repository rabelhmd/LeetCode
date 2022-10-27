class Solution {
public:
    
    void prepare(vector<pair<int, int>> &a, vector<pair<int, int>> &b, vector<vector<int>>& img1, vector<vector<int>>& img2) {
        
        for(int i = 0; i < img1.size(); i++) {
            for(int j = 0; j < img2.size(); j++) {
                if(img1[i][j] == 1) {
                    a.push_back({i, j});
                }
                if(img2[i][j] == 1) {
                    b.push_back({i, j});
                }
            }
        }
    }
    
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<pair<int, int>> a, b;
        prepare(a, b, img1, img2);
        
        int ret = 0;
        map <pair<int,int>, int> Mp;
        for(auto [i, j]: a) { 
            for(auto [x, y]: b) {
                int curx = i - x;
                int cury = j - y;
                Mp[{curx, cury}] += 1;
                ret = max(ret, Mp[{curx, cury}]);
            }
        }
        return ret;
    }
};