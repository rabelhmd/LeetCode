class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int len = dist.size();
        for (int i = 0; i < len; i++) dist[i] = (dist[i] - 1) / speed[i];
        
        sort(begin(dist), end(dist));
        for (int i = 0; i < len; i++) if (i > dist[i]) return i;
        return dist.size();
    }
};