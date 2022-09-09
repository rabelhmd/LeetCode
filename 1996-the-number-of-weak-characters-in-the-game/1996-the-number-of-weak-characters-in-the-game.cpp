class Solution {
public:
    
    static bool cmp(vector<int>& a, vector<int>& b) {
        if(a[0] == b[0])
            return a[1] > b[1];
		return a[0] < b[0];
	}
    
    int numberOfWeakCharacters(vector<vector<int>>& P) {
        sort(P.rbegin(), P.rend(), cmp);
        
        int count = 0;
        int mx = INT_MIN;
        for(int i = 0; i < P.size(); i++) {
            if(P[i][1] < mx) count += 1;
            mx = max(mx, P[i][1]);
        }
        return count;
    }
};