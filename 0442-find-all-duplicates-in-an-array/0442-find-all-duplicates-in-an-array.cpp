class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map <int, int> Mp;
        vector<int> ret;
        for(auto &x: nums) {
            Mp[x] += 1;
            if(Mp[x] == 2) {
                ret.push_back(x);
            }
        }
        return ret;
    }
};