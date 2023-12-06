class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        for(int i = 1, w = 0, d = 0; i <= n; i++) {
            if(i % 7 == 1) {
                w += 1;
                d = w;
            } else d += 1;
            sum += d;
        }
        return sum;
    }
};