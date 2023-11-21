class Solution {
public:
    int rev(int n) {
        int ret = 0;
        for (; n > 0; n /= 10)
            ret = ret * 10 + n % 10;
        return ret;
    }
    
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> Mp;
        int ret = 0;
        for (auto n : nums)
            ret = (ret + Mp[n - rev(n)]++) % 1000000007;
        return ret;
    }
};