class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> ret, odd, even;
        for(int i = 0; i < nums.size(); i++) {
            if(i&1) odd.push_back(nums[i]);
            else even.push_back(nums[i]);
        }
        sort(odd.rbegin(), odd.rend());
        sort(even.begin(), even.end());
        
        int oddLen = odd.size(), evenLen = even.size(), mxLen = max(oddLen, evenLen);
        for(int i = 0; i < mxLen; i++) {
            if(i < evenLen) {
                ret.push_back(even[i]);
            }
            if(i < oddLen) {
                ret.push_back(odd[i]);
            }
        }
        return ret;
    }
};