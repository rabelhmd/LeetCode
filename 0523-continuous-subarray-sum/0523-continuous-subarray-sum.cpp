class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum = 0, temp = 0;
        
        unordered_map <int, int> Mp;
        for(auto &x: nums) {
            sum = (sum + x) % k;
            if(Mp.find(sum) != Mp.end()) return true;
            Mp[temp] += 1;
            temp = sum;
        }
        return false;
    }
};