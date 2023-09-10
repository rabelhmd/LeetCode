class Solution {
public:
    int countOrders(int n) {
        long ret = 1, mod = 1e9 + 7;;
        for (int i = 1; i <= n; i++) ret = ret * (i * 2 - 1) * i % mod;
        return ret;
    }
};