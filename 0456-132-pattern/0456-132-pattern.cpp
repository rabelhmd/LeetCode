class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int ret = INT_MIN, len = nums.size();
        stack<int> St;
        for(int i = len-1; i >= 0; i--) {
            if(nums[i] < ret) return true;
            else {
                while(!St.empty() and nums[i] > St.top()) {
                    ret = St.top();
                    St.pop();
                }
            }
            St.push(nums[i]);
        }
        return false;
    }
};