class Solution {
public:
    
    static bool cmp(vector<int> &a,vector<int> &b) {
        return a[1] < b[1];
    }
	
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
		int ret = -1;      
		if(intervals.size() == 0) return 0;       
		sort(intervals.begin(), intervals.end(), cmp);
		vector<int> prev= intervals[0];
		for(vector<int> i: intervals) {
			if(prev[1] > i[0]) ret += 1;
			else prev = i;
		}
		return ret;
	}
};