class Solution {
public:
    string frequencySort(string s) {
        unordered_map <char, int> Mp; 
        for(auto x: s) Mp[x] += 1;
        
        priority_queue<pair<int, char>> pq;
        for(auto mp: Mp) pq.push({mp.second, mp.first});
        
        string res;
        while(!pq.empty()) {
            auto top = pq.top(); pq.pop();
            while(top.first) res += top.second, top.first -= 1;
        }
        
        return res;
    }
};