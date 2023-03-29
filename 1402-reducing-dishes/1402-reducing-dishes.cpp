class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.rbegin(), satisfaction.rend());
        
        vector<int> sum = satisfaction;
        int len = sum.size();
        for(int i = 1; i < len; i++) {
            sum[i] += sum[i-1];
        }
        
        int ret = 0, cur = 0;
        for(int i = 0; i < len; i++) {
            cur += sum[i];
            ret = max(ret, cur);
        }
        return ret;
    }
};