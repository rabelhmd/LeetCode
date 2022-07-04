class Solution {
public:
    
    int getAns(vector<int> &L, vector <int> &R, int len) {
        int ans = 0;
        for(int i = 0; i < len; i++) ans += max(L[i], R[i]);
        return ans;
    }
    
    int candy(vector<int>& ratings) {
        int len = ratings.size();
        if(len == 1) return 1;
        
        vector<int> prefixSum(len, 1), suffixSum(len, 1);
        for(int i = 1; i < len; i++) {
            if(ratings[i] > ratings[i-1]) {
                prefixSum[i] = prefixSum[i-1] + 1;
            }
        }
        
        for(int i = len-2; i >= 0; i--) {
            if(ratings[i] > ratings[i+1]) {
                suffixSum[i] = suffixSum[i+1] + 1;
            }
        }
        
        return getAns(prefixSum, suffixSum, len);
    }
};