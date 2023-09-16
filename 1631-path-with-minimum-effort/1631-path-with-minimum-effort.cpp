class Solution {
    vector<vector<int>> dirs = {
                {-1,0},
        {0,-1},         {0,1},
                {1, 0}
    };
    
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        using pipii = pair<int,pair<int,int>>;
        priority_queue<pipii, vector<pipii>, greater<pipii>> pq;
        
        int rows = heights.size();
        int cols = heights[0].size();
        vector<vector<int>> dists(rows, vector<int>(cols, INT_MAX));
        
        dists[0][0] = 0;
        pq.push({0, {0,0}});
        while(!pq.empty()) {
            auto node = pq.top(); pq.pop();
            
            int weight = node.first;
            auto coords = node.second;
            int r = coords.first;
            int c = coords.second;
            if(dists[r][c] < weight) continue;
            if(r == rows - 1 and c == cols - 1) return weight;
            for(auto& dir : dirs) {
                int dr = r + dir[0];
                int dc = c + dir[1];
                if(dr < 0 or dr >= rows or dc < 0 or dc >= cols) continue;
                int newWeight = abs(heights[r][c] - heights[dr][dc]);
                newWeight = max(newWeight, weight);
                if(dists[dr][dc] <= newWeight) continue;
                dists[dr][dc] = newWeight;
                pq.push({newWeight, {dr, dc}});         
            }  
        }     
        return 0;      
    }
};