class Solution {
public:
    
    int prefixSum[2*10004];
    int suffixSum[2*10004];
    
    int getAns(int len) {
        int ans = 0;
        for(int i = 0; i < len; i++) ans += max(prefixSum[i], suffixSum[i]);
        return ans;
    }
    
    int candy(vector<int>& ratings) {
        int len = ratings.size();
        if(len == 1) return 1;
        
        for(int i = 0; i < len; i++) prefixSum[i] = 1;
        for(int i = 0; i < len; i++) suffixSum[i] = 1;
        
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
        
        return getAns(len);
    }
};