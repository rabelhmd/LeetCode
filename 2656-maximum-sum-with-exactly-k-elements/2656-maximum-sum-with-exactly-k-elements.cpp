class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int ret = 0, mx = *max_element(nums.begin(), nums.end());
        while(k--> 0) {
            ret += mx;
            mx  += 1;
        }
        return ret;
    }
};