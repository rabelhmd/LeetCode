class Solution {
public:
    int atMostKDistinct(vector<int>& A,int n,int k) {
        int ret = 0, left = 0, right = 0;
        unordered_map<int,int> Mp;
        while(right < n) {
            if(Mp.find(A[right]) == Mp.end()) {
                Mp[A[right]] = 1;
            } else {
                Mp[A[right]] += 1;
            }
            while(Mp.size() > k) {
                Mp[A[left]]--;
                if(Mp[A[left]] == 0) Mp.erase(A[left]);
                left++;
            }
            ret += right-left+1;
            right += 1;
        }
        return ret;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int len = nums.size();
        return atMostKDistinct(nums, len, k) - atMostKDistinct(nums, len, k-1);
    }
};