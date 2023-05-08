class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        unordered_set <int> St1, St2;
        int len = nums.size();
        vector <int> v(len, 0), ret(len, 0); 
        for(int i = len-1; i >= 0; i--) {
            v[i] = St1.size(); St1.insert(nums[i]);
        }
        
        for(int i = 0; i < len; i++) {
            St2.insert(nums[i]); ret[i] = St2.size() - v[i];
        }
        return ret;
    }
};