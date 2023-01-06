class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int ret = 0;
        for(auto &x: costs) {
            if(x > coins) break;
            coins -= x, ret += 1;
        }
        return ret;
    }
};