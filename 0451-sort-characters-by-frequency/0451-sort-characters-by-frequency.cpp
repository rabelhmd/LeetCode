class Solution {
public:
    string frequencySort(string s) {
        unordered_map <char, int> Mp; for(auto &x: s) Mp[x] += 1;
        priority_queue <pair<int, char>> pq;
        for(auto [k, v]: Mp) pq.push({v, k});
        string ret; while(!pq.empty()) {
            auto top = pq.top();
            while(top.first -- > 0) {
                ret += top.second;
            }
            pq.pop();
        }
        return ret;
    }
};