class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int len;
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    KthLargest(int k, vector<int>& nums) {
        faster();
        len = k;
        for(auto &x: nums) {
            pq.push(x);
            if(pq.size() > k) pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > len) pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */