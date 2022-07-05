class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        set <int> St;
        
        for(auto x: nums) St.insert(x);
        
        set <int> :: iterator it = St.begin();
        int start = *it++, count = 1, ans = 1;
        for(; it != St.end(); ++it) {
            if(*it - start == 1) {
                count += 1;
            } else {
                count = 1;
            }
            ans = max(ans, count);
            start = *it;
        }
        return ans;
    }
};