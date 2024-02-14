class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> pos, neg;
        for(auto &x: nums) x > 0 ? pos.push_back(x) : neg.push_back(x);
        vector <int> ret;
        for(int i = 0; i < pos.size(); i++) ret.push_back(pos[i]), ret.push_back(neg[i]);
        return ret;
    }
};