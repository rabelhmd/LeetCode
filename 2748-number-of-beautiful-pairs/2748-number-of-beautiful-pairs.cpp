class Solution {
public:
    int f(int n) {
        while(n >= 10) n /= 10;
        return n;
    }
    int l(int n) {
        return n % 10;
    }
    
    int countBeautifulPairs(vector<int>& nums) {
        int ret = 0, len = nums.size();
        for(int i = 0; i < len; i++) {
            for(int j = i + 1; j < len; j++) {
                int a = nums[i], b = nums[j];
                if(__gcd(f(a), l(b)) == 1) ret += 1;
            }
        }
        return ret;
    }
};