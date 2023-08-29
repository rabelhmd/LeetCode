class Solution {
public:
    int bestClosingTime(string cust) {
        int sum = count(begin(cust), end(cust), 'Y');
        int _min = sum, ret = 0, len = cust.size();
        for (int i = 0; i < len; i++) {
            sum += cust[i] == 'Y' ? -1 : 1;
            if (sum < _min) {
                _min = sum;
                ret = i + 1;
            }
        }
        return ret;
    }
};