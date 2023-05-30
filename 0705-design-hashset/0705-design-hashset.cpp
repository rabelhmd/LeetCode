class MyHashSet {
public:
    
    unordered_map <int, bool> Mp;
    MyHashSet() {}
    
    void add(int key) {
        Mp[key] = true;
    }
    
    void remove(int key) {
        auto it = Mp.find(key);
        if(it != Mp.end()) Mp.erase(it);
    }
    
    bool contains(int key) {
        return Mp.find(key) != Mp.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */