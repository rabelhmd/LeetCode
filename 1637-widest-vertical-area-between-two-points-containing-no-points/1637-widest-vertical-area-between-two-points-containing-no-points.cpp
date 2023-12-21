class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector <int> p;
        for(auto &xy: points) p.push_back(xy[0]);
        sort(p.begin(), p.end());
        int w = 0;
        for(int i = 1; i < p.size(); i++) w = max(w, p[i] - p[i-1]);
        return w;
    }
};