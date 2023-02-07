class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> ret;
        int len = nums.size();
        for(int i = 0, j = n; i < n; i++, j++) {
            ret.push_back(nums[i]);
            ret.push_back(nums[j]);
        }        
        return ret;
    }
};