class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size(); 
        int dp[len1 + 1][len2 + 1];
        for(int i = 0; i <= len1; i++) {
            for(int j = 0; j <= len2; j++) {
                int &cur = dp[i][j];
                if(i == 0 || j == 0) cur = 0;
                else if(nums1[i-1] == nums2[j-1])  cur = 1 + dp[i-1][j-1];
                else cur = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[len1][len2];
    }
};