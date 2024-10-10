class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack<int> St;
        int ret = 0, len = nums.size();
        for (int i = 0; i < len; ++i) {
            if (St.empty() || nums[St.top()] > nums[i]) {
                St.push(i);
            }
        }
            
        for (int i = len - 1; i > ret; --i) {
            while (!St.empty() && nums[St.top()] <= nums[i]) {
                ret = max(ret, i - St.top());
                St.pop();
            }
        }
        return ret;
    }
};