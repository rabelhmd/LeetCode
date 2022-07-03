class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> St;
        for(auto &x: nums) St.insert(x);
        nums.clear();
        for(auto &x: St) nums.push_back(x);
        sort(nums.begin(), nums.end());
        return St.size();
    }
};