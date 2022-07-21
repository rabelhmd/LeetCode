class Solution {
public:
    
    int LIS(vector<int>& v) {
        
        multiset < int > St;
        multiset < int > :: iterator it;
        
        for(auto x: v) {
            St.insert(x);
            it = St.lower_bound(x);
            it ++;
            if(it != St.end()) {
                St.erase(it);
            }
        }
        return St.size();
    }
    
    int lengthOfLIS(vector<int>& nums) {
        return LIS(nums);
    }
};