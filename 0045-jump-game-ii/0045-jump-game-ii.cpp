class Solution {
public:
    int jump(vector<int>& nums) {
        
      for(int i = 1; i < nums.size(); i++) {
        nums[i] = max(nums[i] + i, nums[i-1]);
      }
        
      int ind = 0, ret = 0, len = nums.size() - 1;
      while(ind < len)
          ret += 1, ind = nums[ind];
      return ret;
    }
};
