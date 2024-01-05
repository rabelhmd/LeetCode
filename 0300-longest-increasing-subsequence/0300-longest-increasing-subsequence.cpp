class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        multiset <int> St;
        multiset <int> :: iterator it;
        for(auto &x: nums) {
            St.insert(x);
            it = St.lower_bound(x);
            it ++;
            if(it != St.end()) St.erase(it);
        }
        return St.size();
    }
};