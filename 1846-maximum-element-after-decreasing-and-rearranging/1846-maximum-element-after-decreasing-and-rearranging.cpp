class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int ret = 1, len = arr.size();
        for(int i = 1; i < len; i++) if(arr[i] > ret) ret += 1;
        return ret;
    }
};