class KthLargest {
public:
    priority_queue<int> pq;
    int k;
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    
    KthLargest(int k, vector<int>& nums) {
        faster();
        this-> k = k;
        for(auto &x: nums) add(x);
    }
    
    int add(int val) {
        pq.push(-val);
        if(pq.size() > k) pq.pop();
        return -pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */