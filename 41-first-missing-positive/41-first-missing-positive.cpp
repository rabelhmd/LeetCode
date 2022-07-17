class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set <int> St;
        for(auto x: nums) St.insert(x);
        int len = nums.size();
        for(int i = 1; i <= len; i++) {
            if(St.find(i) == St.end()) return i;
        }
        return len + 1;
    }
};