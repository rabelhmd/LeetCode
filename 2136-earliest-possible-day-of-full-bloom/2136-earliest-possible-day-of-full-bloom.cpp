class Solution {
public:
    int earliestFullBloom(vector<int>& pt, vector<int>& gt) {
        int len = pt.size();
        vector<pair<int, int>> plant(len);
        for(int i = 0; i < len; i++) plant[i] = {gt[i], pt[i]};
        sort(plant.begin(), plant.end(),  greater<pair<int, int>>());
        
        int day = 0, ret = 0;
        for(int i = 0; i < len; i++) {
            day += plant[i].second;
            ret = max(ret, day + plant[i].first);
        }
        return ret;
    }
};