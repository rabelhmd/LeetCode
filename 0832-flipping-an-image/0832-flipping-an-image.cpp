class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &v: image) {
            reverse(v.begin(), v.end());
            for(auto &x: v) {
                if(x == 1) x = 0;
                else if(x == 0) x = 1;
            }
        }
        return image;
    }
};