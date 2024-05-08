class Solution {
public:
    

    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        for (int i = 0; i < score.size(); i++) pq.push({score[i], i});
        
        int pos = 1;
        vector <string> ret(score.size());
        while(pq.empty() == false) {
            if(pos == 1) ret[pq.top().second] = "Gold Medal";
            else if(pos == 2) ret[pq.top().second] = "Silver Medal";
            else if(pos == 3) ret[pq.top().second] = "Bronze Medal";
            else ret[pq.top().second] = to_string(pos);
            pq.pop(); pos += 1;
        }
        return ret;
    }
};