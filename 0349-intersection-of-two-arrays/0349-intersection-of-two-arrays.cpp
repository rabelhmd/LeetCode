class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> St;
        vector <int> ret;
        for(auto &x: nums1) St.insert(x);
        for(auto &x: nums2) if(St.find(x) != St.end()) {
            ret.push_back(x);
            St.erase(x);
        }
        return ret;
    }
};