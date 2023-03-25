class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int mn = INT_MAX, len = arr.size();
        for(int i = 1; i < len; i++) mn = min(mn, arr[i] - arr[i-1]);
        
        vector<vector<int>> ret;
        for(int i = 1; i < len; i++) {
            if(arr[i] - arr[i-1] == mn) {
                ret.push_back({arr[i-1], arr[i]});
            }
        }
        return ret;
    }
};