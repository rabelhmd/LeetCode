class MyCalendar {
public:
    unordered_map <int, int> Mp;
    MyCalendar() {}
    
    bool book(int x, int y) {
        for(auto& [a, b] : Mp) if(b > x && a < y) return false;
        Mp[x] = y;                
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */