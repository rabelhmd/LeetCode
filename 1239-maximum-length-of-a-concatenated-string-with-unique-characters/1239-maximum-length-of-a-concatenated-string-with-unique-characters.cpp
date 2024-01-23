class Solution {
public:
    int dfs(vector<string> &arr, string str = "", int index = 0) {
        unordered_set <char> St(str.begin(), str.end());
        
        int ret = str.size();
        if(St.size() != ret) return 0;
        for(int i = index; i < arr.size(); i++) {
            ret = max(ret, dfs(arr, str + arr[i], i + 1));
        }
        return ret;
    }
    
    int maxLength(vector<string> &arr) {
        return dfs(arr);
    }
};