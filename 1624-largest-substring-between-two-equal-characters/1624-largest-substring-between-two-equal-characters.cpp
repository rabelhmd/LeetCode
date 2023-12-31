class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int id[26] = {}, ret = -1, len = s.size();
        for (auto i = 0; i < len; i++) {
            if (id[s[i] - 'a'] == 0)
                id[s[i] - 'a'] = i + 1;
            ret = max(ret, i - id[s[i] - 'a']);
        }
        return ret;
    }
};