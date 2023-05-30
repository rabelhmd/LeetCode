class MyHashMap {
public:
    unordered_map <int, int> Mp;
    MyHashMap() {}
    
    void put(int key, int value) {
        Mp[key] = value;
    }
    
    int get(int key) {
        if(Mp.find(key) != Mp.end()) return Mp[key];
        return -1;
    }
    
    void remove(int key) {
        auto it = Mp.find(key);
        if(it != Mp.end()) Mp.erase(it);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */