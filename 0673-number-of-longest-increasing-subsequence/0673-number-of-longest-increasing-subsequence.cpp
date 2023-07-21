class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int len = nums.size(), maxlen = 1;
        vector<int> arr(len, 1), cur(len, 1);
        
        for (int i = 1; i < len; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    if (cur[j]+1 > cur[i]) cur[i] = cur[j]+1, arr[i] = arr[j];
                    else if (cur[j] + 1 == cur[i]) arr[i] += arr[j];
                }
            }
            maxlen = max(maxlen, cur[i]);
        }

        int ret = 0;
        for (int i = 0; i < len; i++) if (cur[i] == maxlen) ret += arr[i];
        return ret;
    }
};