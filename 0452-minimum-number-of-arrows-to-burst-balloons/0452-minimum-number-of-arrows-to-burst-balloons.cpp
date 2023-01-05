class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() <= 0) return 0;
        
        sort(points.begin(), points.end());
        int ret = 1, last = points[0][1];
        for(auto &p: points) {
            if(p[0] > last) last = p[1], ret += 1;
            last = min(last, p[1]);
        }
        
        return ret;
    }
};