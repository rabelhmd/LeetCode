class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> St;
        for(auto x: nums) {
            //if(St.find(x) != St.end()) return true;
            St.insert(x);
        }
        return St.size() != nums.size();
    }
};