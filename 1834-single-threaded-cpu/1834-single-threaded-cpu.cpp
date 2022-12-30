class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int len = tasks.size(), id = 0;
        for(id = 0; id < len; id++) tasks[id].push_back(id);
        sort(tasks.begin(),tasks.end());
        
        priority_queue< pair<int,int> > pq;
        long long sum = 1;
        id = 0; vector <int> ret;
        
        while(id < len || !pq.empty()) {
            while(id < len && tasks[id][0] <= sum) {
                pq.push({-tasks[id][1], -tasks[id][2]});
                id++;
            }
            if(!pq.empty()) {
                ret.push_back(-pq.top().second);
                sum += (-pq.top().first), pq.pop();
                continue;
            }
            sum = tasks[id][0];
        }
        return ret;
    }
};