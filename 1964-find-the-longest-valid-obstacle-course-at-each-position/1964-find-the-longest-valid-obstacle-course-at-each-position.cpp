class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        vector <int> ret, mono;
        for(auto &x: obstacles) {
            int l = 0, r = mono.size();
            while(l < r) {
                int mid = (l + r) / 2;
                if (mono[mid] <= x)
                    l = mid + 1;
                else
                    r = mid;
            }
            if(mono.size() == l) mono.push_back(x);
            mono[l] = x;
            ret.push_back(l + 1);
        }
        return ret;
    }
};