class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map <int, int> Mp;
        for(auto &x: tasks) Mp[x] += 1;
        
        int ret = 0;
        for(auto [x, y]: Mp) {
            if(y == 1) return -1;
            ret += (y / 3) + (y % 3 != 0);
        }
        return ret;
    }
};