class RandomizedSet {
public:
    unordered_map<int, int> Mp;
    vector<int> nums;
    RandomizedSet() {}
    
    bool insert(int val) {
        if(Mp.find(val) != Mp.end()) return false;
        nums.push_back(val);
        Mp[val] = nums.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(Mp.find(val) == Mp.end()) return false;
        
        Mp[nums.back()] = Mp[val];
        nums[Mp[val]] = nums.back();
        nums.pop_back();
        Mp.erase(val);
        return true;
    }
    
    int getRandom() {
        int index = rand() % nums.size();
        return nums[index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */