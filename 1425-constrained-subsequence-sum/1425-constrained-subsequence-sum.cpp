class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        vector<int> dp {nums[0]};
        deque<int> decrease {nums[0]};
        int ret = nums[0], len = nums.size();
        
        for (int i = 1; i < len; i++) {
            if (i > k && decrease[0] == dp[i - k - 1])
                decrease.pop_front();
            int temp = max(nums[i], decrease[0] + nums[i]);
            dp.push_back(temp);
            while (!decrease.empty() && decrease.back() < temp)
                decrease.pop_back();
            decrease.push_back(temp);
            
            ret = max(ret, temp);
        }
        return ret;
        
    }
};