class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> ret(nums.size(), -1);
        long long sum = 0, d = k * 2 + 1;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            if (i + 1 >= d) {
                if (i >= d)
                    sum -= nums[i - d];
                ret[i - d / 2] = sum / d;
            }
        }
        return ret;
    }
};