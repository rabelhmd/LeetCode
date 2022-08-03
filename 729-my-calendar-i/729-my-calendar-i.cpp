class MyCalendar {
public:
    unordered_map <int, int> Mp;
    
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto& [x, y] : Mp) {
            if(start < y && x < end) return false;
        }    
        Mp[start] = end;                
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */