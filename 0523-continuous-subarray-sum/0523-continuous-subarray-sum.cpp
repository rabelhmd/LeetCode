class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int len = nums.size();
        int sum = 0, temp = 0;
        map <int, int> Mp;
        for(int i = 0; i < len; i++) {
            sum = (sum + nums[i]) % k;
            if(Mp[sum]) return true;
            Mp[temp] += 1;
            temp = sum;
        }
        return false;
    }
};