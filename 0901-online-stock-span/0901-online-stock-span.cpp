class StockSpanner {
public:
    StockSpanner() {
        
    }
    
    stack <pair<int, int>> St;
    int next(int price) {
        int ret = 1;
        while(!St.empty() && St.top().first <= price) {
            ret += St.top().second;
            St.pop();
        }
        St.push({price, ret});
        return ret;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */