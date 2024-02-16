class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map <int, int> Mp;
        for(auto &x: arr) Mp[x] += 1;
        priority_queue<int> pq;
        for(auto &[k, v]: Mp) pq.push(-v);
        while(k > 0) {
            int t = (-1) * pq.top();
            k -= t;
            if(k >= 0) pq.pop();
        }
        return pq.size();
    }
};