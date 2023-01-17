class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ret;
        for(auto &&i:intervals) {
            if(i[1]<newInterval[0]) {
                ret.push_back(i);
                continue;
            }
            if(newInterval[1]<i[0]) {
                ret.push_back(newInterval);
                newInterval=i;
                continue;
            }
            newInterval[0] = min(newInterval[0],i[0]);
            newInterval[1] = max(newInterval[1],i[1]);
        }
        ret.push_back(newInterval);
        return ret;
    }
};