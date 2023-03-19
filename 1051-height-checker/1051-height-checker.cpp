class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int> ex = heights;
        sort(ex.begin(), ex.end());
        int ret = 0, len = ex.size();
        for(int i = 0; i < len; i++) {
            ret += (heights[i] != ex[i]);
        }
        return ret;
    }
};