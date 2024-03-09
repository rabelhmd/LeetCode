class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> St;
        for(auto &x: nums1) St.insert(x);
        for(auto &x: nums2) if(St.find(x) != St.end()) return x;
        return -1;
    }
};