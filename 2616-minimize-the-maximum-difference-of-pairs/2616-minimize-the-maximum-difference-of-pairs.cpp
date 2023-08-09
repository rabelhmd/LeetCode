class Solution {
public:
    int minimizeMax(vector<int>& v, int p) {
        sort(begin(v), end(v));
        int left = 0, right = v.back() - v.front(), len = v.size();
        
        while (left < right) {
            int mid = (left + right) / 2, count = 0;
            for (int i = 0; i + 1 < len; i++) {
                if (mid >= (v[i + 1] - v[i])) count += 1, i += 1;
            }
            if (count >= p) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};