class Solution {
public:
    
    string reorganizeString(string s) {
        unordered_map <char, int> Mp;
        for(auto &x: s) Mp[x] += 1;
        
        priority_queue<pair <int, char>> pq;
        for(auto &mp: Mp) pq.push({mp.second, mp.first});
        
        string ret;
        while(pq.size() > 1) {
            auto top = pq.top(); pq.pop();
            auto next = pq.top(); pq.pop();
            
            ret += top.second; 
            ret += next.second;
            
            top.first -= 1;
            next.first -= 1;
            if(top.first > 0) pq.push(top);
            if(next.first > 0) pq.push(next);
        }
        
        if(!pq.empty()){
            if(pq.top().first > 1) return "";
            ret += pq.top().second;
        }
        return ret;
    }
};