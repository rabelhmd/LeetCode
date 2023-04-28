class Solution {
public:
    int p[300], r[300], groups;
    
    int numSimilarGroups(vector<string>& strs) {
        int n = strs.size();
        groups = n;
        for (int i = 0; i < n; i++) p[i] = i, r[i] = 1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (similar(strs[i], strs[j])) {
                    Union(i, j);
                }
            }
        }
        return groups;
    }
    
    bool similar(string const& s1, string const& s2) {
        int ret = 0, len = s1.size();
        for (int i = 0; i < len; i++) {
            if(s1[i] != s2[i]) {
                ret++;
                if (ret > 2) return false;
            }
        }
        return true;
    }
    
    void Union(int i, int j) {
        int f1 = find(i), f2 = find(j);
        if (f1 == f2) return;
        if (r[f1] < r[f2]) swap(f1, f2);
        p[f2] = f1;
        r[f1] += r[f2];
        groups--;
    }
    
    int find(int i) {
        while (i != p[i]) {
            p[i] = p[p[i]];
            i = p[i];
        }
        return i;
    }
};