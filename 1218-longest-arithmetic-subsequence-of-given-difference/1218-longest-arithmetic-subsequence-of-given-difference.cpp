class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int> lengths;
        int ret = 1;
        for(int &i: arr) ret = max(ret,lengths[i] = 1 + lengths[i-difference]);
        return ret;
    }
};