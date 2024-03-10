class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> St;
        unordered_map <int, bool> Mp;
        for(auto &val: nums1) Mp[val] = true;
        
        for(auto &val: nums2) {
            if(Mp.find(val) != Mp.end()) {
                St.insert(val);
            }
        }
        
        return vector <int> (St.begin(), St.end());
    }
};