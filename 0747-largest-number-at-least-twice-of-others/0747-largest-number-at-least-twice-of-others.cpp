class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> v = nums;
        sort(v.rbegin(), v.rend());
        int& mx = v[0], sec = v[1];
        if(mx >= 2 * sec) {
            for(int i = 0; i < nums.size(); i++) {
                if(mx == nums[i]) return i;
            }
        }
        return -1;
    }
};