class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> Mp;
        int sum = 0, ret = 0, len = nums.size();
        for (int i = 0; i < len; i++) {
            sum += nums[i] == 0 ? -1 : 1; 
            if (sum == 0) {
                ret = i + 1;
            } else if (Mp.find(sum) != Mp.end()) {
                ret = max(ret, i - Mp[sum]);
            } else {
                Mp[sum] = i;
            }
        }
        return ret;
    }
};