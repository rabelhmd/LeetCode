class NumArray {
public:
    
    vector<int> bit;
    vector<int> v;
    int len;
    
    void add(int index, int val) {
        int idx = index;
        for (; idx < len; idx = idx | (idx + 1)) bit[idx] += val;
        v[index] = val;
    }
    
    void update(int index, int val) {
        add(index, -v[index]);
        add(index, val);
    }
    
    int sum(int r) {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }
    
    int sumRange(int left, int right) {
        return sum(right) - sum(left - 1);
    }
    
    NumArray(vector<int>& nums) {
        len = nums.size();
        bit.resize(len, 0);
        v = nums;
        for (int i = 0; i < nums.size(); i++) add(i, nums[i]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */