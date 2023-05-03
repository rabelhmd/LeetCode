class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> St1(nums1.begin(), nums1.end());
        unordered_set <int> St2(nums2.begin(), nums2.end());
        vector<vector<int>> ret = {{}, {}};
        for(auto &x: St1) {
            if(St2.find(x) == St2.end()) ret[0].push_back(x);
        }
        for(auto &x: St2) {
            if(St1.find(x) == St1.end()) ret[1].push_back(x);
        }
        return ret;
    }
};