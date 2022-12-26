class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = nums.size(), _max = 0;
        for(int i = 0; i < len; i++) {
            _max = max(_max, nums[i] + i);
            if(_max < i + 1) break;
        }
        return _max >= len-1;
    }
};