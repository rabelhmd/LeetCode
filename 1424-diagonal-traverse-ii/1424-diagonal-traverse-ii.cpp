class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int len = nums.size();
		
        vector<int> ret;
        queue<pair<int, int>> q;
        q.push({0,0});
		
        while (!q.empty()) {
            pair<int, int> p = q.front(); q.pop();
            ret.push_back(nums[p.first][p.second]);
			
            if (p.second == 0 && p.first+1 < len) {
                q.push({p.first+1, p.second});
            }
            
            if (p.second+1 < nums[p.first].size()) {
                q.push({p.first, p.second+1});
            }
        }
        
        return ret;
    }
};