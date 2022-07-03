class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, bool> Mp;
        for(auto x: nums) {
            if(Mp.find(x) != Mp.end()) return true;
            Mp[x] = true;
        }
        return false;
    }
};