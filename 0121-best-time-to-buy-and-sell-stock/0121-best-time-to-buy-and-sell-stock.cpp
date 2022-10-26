class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0], sell = 0;
        for(auto &p: prices) {
            buy = min(buy, p);
            sell = max(sell, p - buy);
        }
        return sell;
    }
};