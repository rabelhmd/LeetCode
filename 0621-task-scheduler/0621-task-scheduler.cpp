class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int Mp[26] = {0};
        for(auto &t: tasks) Mp[t-'A'] += 1;
        sort(begin(Mp) , end(Mp));
        
        int chunk = Mp['Z' - 'A'] - 1;
        int id = chunk * n, len = tasks.size();
        for(int i = 'Y'-'A'; i >= 0; i--) id -= min(chunk, Mp[i]);
        return id < 0 ? len : len + id;
    }
};