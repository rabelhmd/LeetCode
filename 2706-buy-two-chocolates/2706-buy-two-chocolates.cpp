class Solution {
public:
    int buyChoco(vector<int>& p, int money) {
        sort(p.begin(), p.end());
        int ret = money - (p[0] + p[1]);
        return ret >= 0 ? ret : money;
    }
};