class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> Mp;
        Mp[0] = 1;
        int sum = 0;
        int ret = 0;
        for (int &num: nums) {
            sum += num;
            if (Mp.find(sum - goal) != Mp.end()) ret += Mp[sum - goal];
            Mp[sum]++;
        }
        return ret;
    }
};