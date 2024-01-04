class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map <int, int> Mp;
        for(auto &x: nums) Mp[x] += 1;
        int ret = 0;
        for(auto &[key, val]: Mp) {
            if(val == 1) return -1;
            ret += (val / 3) + (val % 3 != 0);
        }
        return ret;
    }
};