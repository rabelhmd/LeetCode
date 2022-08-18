class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map <int, int> Mp;
        for(auto &x: arr) Mp[x] += 1;
        
        priority_queue<int> pq;
        for(auto &mp: Mp) pq.push(mp.second);
        
        int count = 0, geche = 0, half = arr.size() / 2;
        while(geche < half) {
            geche += pq.top(); pq.pop();
            count += 1;
        }
        
        return count;
    }
};