class Solution {
public:
    int kthFactor(int n, int k) {
        for(int i = 1; i <= n; i++) {
            k -= (n % i == 0);
            if(k == 0) return i;
        }
        return -1;
    }
};