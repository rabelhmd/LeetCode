class Solution {
public:
    int isEvenDigit(int n) {
        int count = 0;
        while(n) {
            n /= 10;
            count += 1;
        }
        return count % 2 == 0;
    }
    
    int findNumbers(vector<int>& nums) {
        int ret = 0;
        for(auto &x: nums) ret += isEvenDigit(x);
        return ret;
    }
};