class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set <char> St;
        for(auto &x: s) St.insert(x);
        return St.size();
    }
};