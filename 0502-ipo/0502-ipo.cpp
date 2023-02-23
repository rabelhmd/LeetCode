class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int len = profits.size();
        
        vector<pair<int, int>> projects(len);
        for (int i = 0; i < len; i++) {
            projects[i] = {capital[i], profits[i]};
        }
        sort(projects.begin(), projects.end());
        
        int i = 0, ret = w;
        priority_queue<int> pq;
        
        while (k--) {
            while (i < len && projects[i].first <= ret) {
                pq.push(projects[i].second);
                i++;
            }
            if (pq.empty()) return ret;
            ret += pq.top();
            pq.pop();
        }
        return ret;
    }
};