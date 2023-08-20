class Solution {
public:
    bool topSort(vector<unordered_set<int>>& v, int i, vector<int>& res, vector<int>& stat) {
        if (stat[i] != 0) return stat[i] == 2;
        stat[i] = 1;
        for (auto &n: v[i]) if (!topSort(v, n, res, stat)) return false;
        stat[i] = 2;
        res.push_back(i);
        return true;
    }
    
    vector<int> sortItems(int n, int m, vector<int>& group, vector<vector<int>>& beforeItems) {
        vector <int> res_tmp, res(n), stat(n + 2 * m);
        vector <unordered_set<int>> v(n + 2 * m);
        
        for (auto i = 0; i < n; i++) {
            if (group[i] != -1) {
                v[n + group[i]].insert(i);
                v[i].insert(n + m + group[i]);
            }
            
            for (auto j : beforeItems[i]) {
                if (group[i] != -1 && group[i] == group[j]) v[j].insert(i);
                else {
                    auto ig = group[i] == -1 ? i : n + group[i];
                    auto jg = group[j] == -1 ? j : n + m + group[j];
                    v[jg].insert(ig);
                }
            }
        }
        
        for (int n = v.size() - 1; n >= 0; --n)
            if (!topSort(v, n, res_tmp, stat)) return {};
        reverse(begin(res_tmp), end(res_tmp));
        copy_if(begin(res_tmp), end(res_tmp), res.begin(), [&](int i) {return i < n; });
        return res;
    }
};