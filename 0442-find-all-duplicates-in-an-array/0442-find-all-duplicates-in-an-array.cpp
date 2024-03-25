class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map <int, bool> Mp;
        vector<int> ret;
        for(auto &x: nums) {
            if(Mp.find(x) != Mp.end()) ret.push_back(x);
            Mp[x] = true;
        }
        return ret;
    }
};