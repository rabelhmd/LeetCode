class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector <int> ret;
        for(int i = 1; i < mountain.size()-1; i++) {
            if(mountain[i] > mountain[i-1] and mountain[i] > mountain[i+1]) ret.push_back(i);
        }
        return ret;
    }
};