class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> St;
        for(auto &x: nums) St.insert(x);
        nums.clear();
        for(auto &x: St) nums.push_back(x);
        return St.size();
    }
};