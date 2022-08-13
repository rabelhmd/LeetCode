class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map <int, int> Mp;
        int res = 0;
        for(auto &x: nums) {
            res += Mp[x + k] + Mp[x - k];
            Mp[x] += 1;
        }
        return res;
    }
};