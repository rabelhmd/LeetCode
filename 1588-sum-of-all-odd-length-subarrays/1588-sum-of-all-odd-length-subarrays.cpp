class Solution {
public:
    
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0, len = arr.size();
        for(int i = 0; i < len; i += 1) {
            for(int j = i+1; j <= len; j += 2) {
                for(int k = i; k < j; k ++) {
                    sum += arr[k];
                }
            }
        }
        return sum;
    }
};