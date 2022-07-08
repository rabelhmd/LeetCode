class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> Mp;
        for(auto x: nums1) Mp[x] += 1;
        vector<int> ans;
        for(auto x: nums2) {
            if(Mp[x] > 0) {
                ans.push_back(x);
                Mp[x] -= 1;
            }
        }
        return ans;
    }
};