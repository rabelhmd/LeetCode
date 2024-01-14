class Solution {
public:
    bool closeStrings(string w1, string w2) {
        int len = w1.size();
        if(len != w2.size()) return false;
        set <char> st1, st2;
        vector<int> freq1(255,0), freq2(255,0);

        for(int i = 0; i < len; i++) {
            st1.insert(w1[i]);
            st2.insert(w2[i]);
            freq1[w1[i]] += 1;
            freq2[w2[i]] += 1;
        }
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());
        return st1 == st2 && freq1 == freq2;
    }
};