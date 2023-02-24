class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> ret1, ret2;
        for(auto &x: nums) {
            (x&1) ? ret2.push_back(x) : ret1.push_back(x);
        }
        for(auto &x: ret2) {
            ret1.push_back(x);
        }
        return ret1;
    } 
};