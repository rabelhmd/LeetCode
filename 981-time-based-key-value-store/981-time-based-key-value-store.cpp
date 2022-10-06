class TimeMap {
public:
    unordered_map <string, map<int, string>> Mp;
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        Mp[key].insert({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        auto it = Mp[key].upper_bound(timestamp);
        if(it == Mp[key].begin()) { return "";}
        return prev(it)->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */