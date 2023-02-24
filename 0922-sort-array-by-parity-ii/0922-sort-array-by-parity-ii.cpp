class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ret, odd, even;
        for(auto &x: nums) {
            if(x&1) odd.push_back(x);
            else even.push_back(x);
        }
        
        for(int i = 0; i < odd.size(); i++) {
            ret.push_back(even[i]);
            ret.push_back(odd[i]);
        }
        return ret;
    }
};