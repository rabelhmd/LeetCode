class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map <int, int> Mp;
        for(auto &x: arr1) Mp[x] += 1;
        
        vector<int> ret;
        for(auto &x: arr2) {
            while(Mp[x]-- > 0) ret.push_back(x);
        }
        
        for(auto it: Mp) {
            while(it.second-- > 0) ret.push_back(it.first);
        }
        
        return ret;
    }
};
