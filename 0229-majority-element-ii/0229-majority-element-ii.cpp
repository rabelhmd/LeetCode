class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int, int> Mp;
        for(auto &x: nums) Mp[x] += 1;
        int x = nums.size()/3;
        vector<int> ret;
        for(auto [k, v]: Mp)  if(v > x) ret.push_back(k);
        return ret;
    }
};