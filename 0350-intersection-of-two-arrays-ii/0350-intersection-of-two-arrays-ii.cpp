class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> Mp;
        for(auto &x: nums1) Mp[x] += 1;
        vector <int> ret;
        for(auto &x: nums2) {
            if(Mp[x] > 0) {
                Mp[x]--;
                ret.push_back(x);
            }
        }
        return ret;
    }
};