class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map <int, int> Mp;
        for(auto x: nums) Mp[x] += 1;
        
        vector<vector<int>> ret;
        while(!Mp.empty()) {
            vector <int> temp;
            for(auto it = Mp.begin(); it != Mp.end(); ) {
                temp.push_back(it -> first);
                it -> second--;
                if(it -> second == 0) it = Mp.erase(it);
                else it ++;
            }
            
            ret.push_back(temp);
        }
        return ret;
    }
};