class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map <int, int> Mp;
        for(auto &x: arr) Mp[x] += 1;
        vector <int> v;
        for(auto &[k, x]: Mp) v.push_back(x);
        sort(v.begin(), v.end());
        int t = 0;
        for(int i = 0; i < v.size(); i++) {
            k -= v[i];
            if(k >= 0) t++;
        }
        return v.size()-t;
    }
};