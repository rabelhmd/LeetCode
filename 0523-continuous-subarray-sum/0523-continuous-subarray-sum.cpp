class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int len = nums.size();
        int sum = 0, temp = 0;
        unordered_map <int, int> Mp;
        for(int i = 0; i < len; i++) {
            sum = (sum + nums[i]) % k;
            if(Mp.find(sum) != Mp.end()) return true;
            Mp[temp] += 1;
            temp = sum;
        }
        return false;
    }
};