class Solution {
public:
    int countDigits(int num) {
        int ret = 0, temp = num;
        while(temp) {
            int d = temp % 10;
            ret += (num % d == 0);
            temp /= 10;
        }
        return ret;
    }
};