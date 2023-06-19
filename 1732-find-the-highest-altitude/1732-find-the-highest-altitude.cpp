class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0, mx = 0;
        for(auto &g: gain) sum += g, mx = max(mx, sum);
        return mx;
    }
};