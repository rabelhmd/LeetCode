class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> Mp;
        Mp[0] = 1;
        int sum = 0;
        int ret = 0;
        for (int &num: nums) {
            sum += num;
            int x = sum - goal;
            if (Mp.find(x) != Mp.end()) ret += Mp[x];
            Mp[sum]++;
        }
        return ret;
    }
};