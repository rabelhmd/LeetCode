class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int first = nums[0], max_sum, min_sum, total, prev_min, prev_max, len = nums.size();
        max_sum = min_sum = total = prev_min = prev_max = first;
        
        for (int i = 1; i < len; i++) {
            int cur = nums[i]; total += cur;
            
            prev_max = max(prev_max+cur, cur);
            max_sum = max(max_sum, prev_max);
            
            prev_min = min(prev_min+cur, cur);
            min_sum = min(min_sum, prev_min);
        }
        return total == min_sum ? max_sum : max(max_sum, total - min_sum);
    }
};