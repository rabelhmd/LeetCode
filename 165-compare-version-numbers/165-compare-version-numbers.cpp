class Solution {
public:
    
    vector <int> getFilter(string v) {
        vector <int> ans;
        int len = v.size();
        for(int i = 0; i < len; i++) {
            string str = "";
            while(i < len && v[i] != '.') str += v[i], i += 1;
            if(str.empty()) continue;
            ans.push_back(stoi(str));
        }
        return ans;
    }
    
    int compareVersion(string version1, string version2) {
        vector <int> v1 = getFilter(version1);
        vector <int> v2 = getFilter(version2);
        
        while(v1.size() < v2.size()) v1.push_back(0);
        while(v1.size() > v2.size()) v2.push_back(0);
        
        for(int i = 0; i < v1.size(); i++) {
            if(v1[i] < v2[i]) return -1;
            else if(v1[i] > v2[i]) return 1;
        }
        return 0;
    }
};