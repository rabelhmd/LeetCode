class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> ret;
        for(auto &x: nums) if(x%2 == 0) ret.push_back(x);
        for(auto &x: nums) if(x&1) ret.push_back(x);
        return ret;
    }
};