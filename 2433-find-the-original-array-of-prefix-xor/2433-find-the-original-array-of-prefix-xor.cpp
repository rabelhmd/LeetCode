class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int len = pref.size(), cur = pref[0];
        vector <int> ret(len, cur);
        for(int i = 1; i < len; i++) ret[i] = cur ^ pref[i], cur = pref[i];
        return ret;
    }
};