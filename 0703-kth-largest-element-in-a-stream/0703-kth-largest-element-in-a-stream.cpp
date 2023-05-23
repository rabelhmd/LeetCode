class KthLargest {
public:
    multiset <int> St;
    int k;
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    KthLargest(int k, vector<int>& nums) {
        faster();
        this->k = k;
        for(auto &x: nums) St.insert(x);
    }
    
    int add(int val) {
        St.insert(val);
        auto it = St.begin();
        for(int i = 0; i < St.size() - k; i++) it ++;
        return *it;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */