unordered_map <int, int> Mp;
bool cmp(string a, string b) {
    int lenA = a.size(), lenB = b.size(), len = min(lenA, lenB);
    for(int i = 0; i < len; i++) {
        if(Mp[a[i]] < Mp[b[i]]) return true;
        if(Mp[a[i]] > Mp[b[i]]) return false;
    }
    return lenA <= lenB;
}

class Solution {
public:
    
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i = 0; i < order.size(); i++) Mp[order[i]] = i;
        vector<string> temp = words;
        sort(temp.begin(), temp.end(), cmp);
        return temp == words;
    }
};