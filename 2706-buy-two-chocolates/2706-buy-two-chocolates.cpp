class Solution {
public:
    int buyChoco(vector<int>& p, int money) {
        nth_element(begin(p), begin(p) + 2, end(p));
        int ret = money - (p[0] + p[1]);
        return ret >= 0 ? ret : money;
    }
};