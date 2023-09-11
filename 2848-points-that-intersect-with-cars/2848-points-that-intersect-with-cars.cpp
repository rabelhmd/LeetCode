class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<bool> vis(101, true);
        int ret = 0;
        for(const auto &it: nums) {
            for(int i = it[0]; i <= it[1]; i++) {
                ret += vis[i];
                vis[i] = false;
            }
        }
        return ret;
    }
};