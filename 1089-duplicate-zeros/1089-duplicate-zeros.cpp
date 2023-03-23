class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int len = arr.size();
        
        vector <int> v;
        for(auto&x: arr) {
            if(v.size() >= len) break;
            if(!x) {
                v.push_back(0);
                if(v.size() >= len) break;
                v.push_back(0);
            }
            else v.push_back(x);
        }
        arr = v;
    }
};