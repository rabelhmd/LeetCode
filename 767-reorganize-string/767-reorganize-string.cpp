class Solution {
public:
    
    string reorganizeString(string s) {
        unordered_map <char, int> Mp;
        for(auto x: s) Mp[x] += 1;
        
        priority_queue<pair <int, char> > PQ;
        for(auto mp: Mp) PQ.push({mp.second, mp.first});
        
        s = "";
        while(PQ.size() > 1) {
            auto top1 = PQ.top(); PQ.pop();
            auto top2 = PQ.top(); PQ.pop();
            
            s += top1.second; 
            s += top2.second;
            
            top1.first -= 1;
            top2.first -= 1;
            
            if(top1.first > 0) PQ.push(top1);
            if(top2.first > 0) PQ.push(top2);
        }
        
        if(!PQ.empty()){
            if(PQ.top().first > 1)
                return "";
            s += PQ.top().second;
        }
        
        return s;
    }
};