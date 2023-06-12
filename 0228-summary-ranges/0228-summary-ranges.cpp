class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ret;
        int len = nums.size(); if(len == 0) return ret;
        int last = nums[0];
        for(int i = 0; i < len; i++) {
            if(i == len-1 || nums[i] + 1 != nums[i+1]) {
                if(nums[i] != last) {
                    ret.push_back(to_string(last) + "->" + to_string(nums[i]));
                } else {
                    ret.push_back(to_string(last));
                }
                if(i != len-1) last = nums[i+1];
            }
        }
        return ret;
    }
};
