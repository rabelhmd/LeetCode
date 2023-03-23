class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector <int> v; for(auto&x: arr) {
            if(v.size() >= arr.size()) break;
            if(!x) {
                v.push_back(0);
                if(v.size() >= arr.size()) break;
                v.push_back(0);
            }
            else v.push_back(x);
        }
        arr = v;
    }
};