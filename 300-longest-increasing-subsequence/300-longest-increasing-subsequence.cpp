class Solution {
public:
    
    int cuteLIS(vector<int>& nums) {
        multiset <int> St;
        multiset <int> :: iterator it;
        for(auto &c: nums) {
            St.insert(c);
            it = St.lower_bound(c); it++;
            if(it != St.end()) St.erase(it);
        }
        return St.size();
    }
    
    int lengthOfLIS(vector<int>& nums) {
        return cuteLIS(nums);
    }
};