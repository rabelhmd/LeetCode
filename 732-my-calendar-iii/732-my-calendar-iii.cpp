class MyCalendarThree {
public:
    map <int, int> Mp;
    int mx = 0;
    MyCalendarThree() {}
    
    int book(int start, int end) {
        Mp[start] += 1; Mp[end] -= 1;
        int count = 0;
        for(auto &it: Mp) {
            count += it.second;
            mx = max(mx, count);
        }
        return mx;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */